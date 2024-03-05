#include "system.h"
#include "app.h"

void system_run( void ){
    app_init();
    while (1){
        app_loop();
    }
}
