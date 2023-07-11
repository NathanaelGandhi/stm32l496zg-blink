//##############################################################################

#include "app.h"

#include "main.h"

//##############################################################################

void app(void) {
    // setup
    /* your code */

    // loop
    while (1) {
        HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
        HAL_Delay(500);
        HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);
        HAL_Delay(500);
    }

    return;  // should never return
}

//##############################################################################
