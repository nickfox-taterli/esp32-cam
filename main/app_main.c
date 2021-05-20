#include "app_camera.h"
#include "app_wifi.h"
#include "app_httpd.h"

#include "person_detection/main_functions.h"

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"

#include "esp_log.h"

static const char *TAG = "main";

void tf_main(void) {
  setup();
  while (true) {
    loop();
  }
}

void app_main()
{
    xTaskCreate((TaskFunction_t)&tf_main, "tensorflow", 32 * 1024, NULL, 4, NULL);
}