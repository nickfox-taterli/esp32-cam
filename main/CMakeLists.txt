set(COMPONENT_SRCS "app_main.c" "app_wifi.c" "app_camera.c" "app_httpd.c")
set(COMPONENT_ADD_INCLUDEDIRS "include")

set(COMPONENT_REQUIRES
    esp32-camera
    esp-face
    nvs_flash
    fb_gfx
    esp_http_server
)

set(COMPONENT_EMBED_FILES "www/index_ov2640.html.gz")

register_component()