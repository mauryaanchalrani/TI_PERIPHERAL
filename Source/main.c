#include <stdint.h>
#include "TM4C1233E6PZ.h"
//#include <stdbool.h>
#include "GPIO.h"

void delayMs(int n);

int main(void)
{
    //enableGPIOClock(PORTE);
    //SYSCTL_GPIOHBCTL_R |=  0x10;
    //SYSCTL_RCGCGPIO_R  |=  0x10;
    //while ((SYSCTL_PRGPIO_R & 0x10) == 0) {};
   setGPIO_Direction(PORTE, PIN4, OUTPUT); //test
//    GPIO_PORTE_DIR_R |= 0x10;
//    GPIO_PORTE_DEN_R |= 0x10;
//    writeGPIO(PORTE, PIN4, HIGH);
//    GPIO_PORTE_AHB_DIR_R  |= 0X10;
//    GPIO_PORTE_AHB_DEN_R  |= 0X10;

    //GPIO_PORTE_AHB_DIR_R  |= 0X20;
    //GPIO_PORTE_AHB_DEN_R  |= 0X20;

    //GPIO_PORTE_AHB_DATA_R |= (1<<4);
    //GPIO_PORTE_AHB_DATA_R |= (1<<5);
    while(1)
    {
     toggleGPIO(PORTE, PIN4);
     // GPIO_PORTE_DATA_R ^= 0x10;
      //GPIO_PORTE_AHB_DATA_R ^= 0X10;
      delayMs(1000);
      //GPIO_PORTE_AHB_DATA_R ^= 0X20;
     // delayMs(500);
    }
}
