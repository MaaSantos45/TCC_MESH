#include <stdio.h>
#include "esp_mesh.h"


void app_main(void){
    esp_mesh_init();
    printf("%s", (const char *) esp_mesh_is_root());
}
