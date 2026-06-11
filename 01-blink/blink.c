#include <stdio.h>
#include "pico/stdlib.h"
int main(){
const uint led = 25;
gpio_init(led);
gpio_set_dir(led,GPIO_OUT);

    while(true){
        gpio_put(led,1);
        sleep_ms(200);
        gpio_put(led,0);
        sleep_ms(800);
    }

}
