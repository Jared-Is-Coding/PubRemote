import React, { useState } from 'react';
import { Header } from './components/Header';
import { DeviceInfo } from './components/DeviceInfo';
import { FirmwareSelector } from './components/FirmwareSelector';
import { FlashProgress } from './components/FlashProgress';
import { FlashProgress as FlashProgressType, DeviceInfoData } from './types';
import { Usb } from 'lucide-react';
import { ESPService } from './services/espService';

function App() {
  const [selectedFirmware, setSelectedFirmware] = useState<
    File | string | null
  >(null);
  const [flashProgress, setFlashProgress] = useState<FlashProgressType>({
    status: 'idle',
    progress: 0,
  });
  const [deviceInfo, setDeviceInfo] = useState<DeviceInfoData>({
    connected: false,
  });
  const [espService] = useState(() => new ESPService());

  const handleConnect = async () => {
    try {
      setDeviceInfo({ connected: false });
      const info = await espService.connect();
      setDeviceInfo({
        ...info,
        connected: true,
      });
    } catch (error) {
      console.error('Connection error:', error);
      setDeviceInfo({ connected: false });
      throw error;
    }
  };

  const handleDisconnect = () => {
    espService.disconnect();
    setDeviceInfo({ connected: false });
  };

  const handleFlash = async () => {
    if (!selectedFirmware) return;

    try {
      if (!espService.isConnected()) {
        setFlashProgress({ status: 'connecting', progress: 0 });
        await handleConnect();
      }

      setFlashProgress({ status: 'erasing', progress: 20 });
      setFlashProgress({ status: 'flashing', progress: 50 });

      await espService.flash(selectedFirmware);

      setFlashProgress({ status: 'complete', progress: 100 });
      handleDisconnect();

      // Reconnect to get updated device info
      // await handleConnect();
    } catch (error) {
      console.error('Flash error:', error);
      setFlashProgress({
        status: 'error',
        progress: 0,
        error:
          error instanceof Error ? error.message : 'Unknown error occurred',
      });
    }
  };

  return (
    <div className="min-h-screen bg-gray-950 text-gray-100">
      <Header />

      <main className="container mx-auto px-4 py-8">
        <div className="mx-auto max-w-3xl space-y-8">
          <DeviceInfo
            deviceInfo={deviceInfo}
            onConnect={handleConnect}
            onDisconnect={handleDisconnect}
          />

          <div className="rounded-lg bg-gray-900 p-6">
            <FirmwareSelector
              onSelectFirmware={setSelectedFirmware}
              selectedFirmware={selectedFirmware}
            />
          </div>

          <div className="rounded-lg bg-gray-900 p-6">
            <h2 className="mb-6 text-xl font-semibold">Flash Firmware</h2>
            <div className="space-y-4">
              <FlashProgress
                progress={flashProgress}
                isDeviceConnected={deviceInfo.connected}
              />

              <button
                onClick={handleFlash}
                disabled={
                  !selectedFirmware ||
                  !deviceInfo.connected ||
                  flashProgress.status !== 'idle'
                }
                className="flex w-full items-center justify-center gap-2 rounded-lg bg-blue-600 px-4 py-2 font-medium text-white transition-colors hover:bg-blue-700 disabled:cursor-not-allowed disabled:bg-gray-700"
              >
                <Usb className="h-5 w-5" />
                Flash Device
              </button>
            </div>
          </div>
        </div>
      </main>
    </div>
  );
}

export default App;