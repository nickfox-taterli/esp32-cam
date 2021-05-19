#include "app_camera.h"
#include "app_wifi.h"
#include "app_httpd.h"

void app_main()
{
    app_wifi_main();
    app_camera_main();
    app_httpd_main();
}