set(COMPONENT_SRCS "app_main.c" 
"app_wifi.c" 
"app_camera.c" 
"app_httpd.c"
"tensorflow/image_provider.cc" 
"tensorflow/model_settings.cc" 
"tensorflow/main_functions.cc"
"tensorflow/detection_responder.cc"
"tensorflow/person_detect_model_data.cc"
)
set(COMPONENT_ADD_INCLUDEDIRS "include")

set(COMPONENT_REQUIRES
    esp32-camera
    esp-face
    nvs_flash
    fb_gfx
    tensorflow
    esp_http_server
)

set(COMPONENT_EMBED_FILES "www/index_ov2640.html.gz")

register_component()