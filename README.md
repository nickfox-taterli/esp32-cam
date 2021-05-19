# Camera with Web Server - AiThinker ESP-CAM Module

# Quick Start

After you've completed the hardware settings, please follow the steps below:

0. **Clone** git clone --recursive https://github.com/nickfox-taterli/esp32-cam
1. **Connect** the camera to ESP32 module. For connection pins, please see [here](../../../docs/en/Camera_connections.md)
2. **Configure** the example through `idf.py menuconfig`;
3. **Build And Flash** the application to ESP32;
4. **Open Your Browser** and point it to `http://[ip-of-esp32]/`;
5. **To Get Image** press `Get Still` or `Start Stream`;
6. **Use The Options** to enable/disable Face Detection, Face Recognition and more;