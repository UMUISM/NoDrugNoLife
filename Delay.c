#include <REG51.h>
#include "Delay.h"

// 延时：毫秒
void DELAY_MS (unsigned int a) {
    unsigned int i;
    while ( --a != 0 )    {
        for (i=0; i<=600; i++);
    }
}

// 延时：秒
void DELAY_S (unsigned int a) {
    unsigned int i;
    a = a * 1000;
    while ( --a != 0 )    {
        for (i=0; i<=600; i++);
    }
}

// 延时：分
void DELAY_M (unsigned int a) {
    unsigned int i;
    a = a * 1000 * 60;
    while ( --a != 0 )    {
        for (i=0; i<=600; i++);
    }
}