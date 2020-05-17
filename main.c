#include <REG51.h>
#include "Delay.h"

sbit LEDR = P3^1;
sbit LEDG = P3^2;
sbit LEDB = P3^3;
sbit SA = P3^5;
sbit SB = P3^4;

void main (void) {
    int LED = 0;
    while(1) {
        SA = 1;
        SB = 1;
        if(SA == 0) {
            DELAY_MS(50);
            if(SA == 0) {
                LEDR = 1;
                LED += 1;
            }
            if(LED == 1) {
                LEDG = 1;
                LEDB = 0;
                DELAY_MS(500);
            } else if(LED == 2) {
                LEDB = 1;
                LEDG = 0;
                DELAY_MS(500);
            }
        }
        if(SB == 0) {
            if(SB == 0) {
                LED = 0;
            }
        }
        if(LED == 0) {
            LEDR = 0;
            LEDG = 1;
            LEDB = 1;
        }
    }
}
