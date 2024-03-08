/*
 * Oscar Ivan Moreno Gutierrez
 * Practica Aula #1
 * 
*/
#include "mcc_generated_files/system/system.h"
#include "mcc_generated_files/system/pins.h"
#include "mcc_generated_files/timer/tmr1.h"
/*
    Main application
*/
static uint16_t indiceColor = 0;
static uint16_t matrizColor[8][3]={
    {0,0,0},
    {0,0,1},
    {0,1,0},
    {0,1,1},
    {1,0,0},
    {1,0,1},
    {1,1,0},
    {1,1,1}
};
/*
    Main application
*/

int main(void){
    SYSTEM_Initialize();
    Timer1_Initialize;
    while(1);
    return 1;    
}
void __attribute__ ((weak)) TMR1_TimeoutCallback( void )
{ 
        _LATB14 = matrizColor[indiceColor][0];
        _LATD7 = matrizColor[indiceColor][1];
        _LATD5 = matrizColor[indiceColor][2];
        if (indiceColor > 7){
            indiceColor = 0;
        }else{
            indiceColor ++;
        }
        
} 

void __attribute__ ((weak)) SWITCH3_CallBack(void)
{
    _LATE0 = !_LATE0;
    _LATE1 = !_LATE0;
}