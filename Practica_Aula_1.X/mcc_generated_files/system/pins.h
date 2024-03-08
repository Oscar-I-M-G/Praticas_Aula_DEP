/**
 * PINS Generated Driver Header File 
 * 
 * @file      pins.h
 *            
 * @defgroup  pinsdriver Pins Driver
 *            
 * @brief     The Pin Driver directs the operation and function of 
 *            the selected device pins using dsPIC MCUs.
 *
 * @skipline @version   Firmware Driver Version 1.0.2
 *
 * @skipline @version   PLIB Version 1.3.0
 *
 * @skipline  Device : dsPIC33CH512MP508
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H
// Section: Includes
#include <xc.h>

// Section: Device Pin Macros

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB14 GPIO Pin which has a custom name of RGB_A to High
 * @pre      The RB14 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define RGB_A_SetHigh()          (_LATB14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RB14 GPIO Pin which has a custom name of RGB_A to Low
 * @pre      The RB14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define RGB_A_SetLow()           (_LATB14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RB14 GPIO Pin which has a custom name of RGB_A
 * @pre      The RB14 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define RGB_A_Toggle()           (_LATB14 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RB14 GPIO Pin which has a custom name of RGB_A
 * @param    none
 * @return   none  
 */
#define RGB_A_GetValue()         _RB14

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB14 GPIO Pin which has a custom name of RGB_A as Input
 * @param    none
 * @return   none  
 */
#define RGB_A_SetDigitalInput()  (_TRISB14 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RB14 GPIO Pin which has a custom name of RGB_A as Output
 * @param    none
 * @return   none  
 */
#define RGB_A_SetDigitalOutput() (_TRISB14 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD5 GPIO Pin which has a custom name of RGB_R to High
 * @pre      The RD5 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define RGB_R_SetHigh()          (_LATD5 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD5 GPIO Pin which has a custom name of RGB_R to Low
 * @pre      The RD5 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define RGB_R_SetLow()           (_LATD5 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD5 GPIO Pin which has a custom name of RGB_R
 * @pre      The RD5 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define RGB_R_Toggle()           (_LATD5 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD5 GPIO Pin which has a custom name of RGB_R
 * @param    none
 * @return   none  
 */
#define RGB_R_GetValue()         _RD5

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD5 GPIO Pin which has a custom name of RGB_R as Input
 * @param    none
 * @return   none  
 */
#define RGB_R_SetDigitalInput()  (_TRISD5 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD5 GPIO Pin which has a custom name of RGB_R as Output
 * @param    none
 * @return   none  
 */
#define RGB_R_SetDigitalOutput() (_TRISD5 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD7 GPIO Pin which has a custom name of RGB_V to High
 * @pre      The RD7 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define RGB_V_SetHigh()          (_LATD7 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RD7 GPIO Pin which has a custom name of RGB_V to Low
 * @pre      The RD7 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define RGB_V_SetLow()           (_LATD7 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RD7 GPIO Pin which has a custom name of RGB_V
 * @pre      The RD7 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define RGB_V_Toggle()           (_LATD7 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RD7 GPIO Pin which has a custom name of RGB_V
 * @param    none
 * @return   none  
 */
#define RGB_V_GetValue()         _RD7

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD7 GPIO Pin which has a custom name of RGB_V as Input
 * @param    none
 * @return   none  
 */
#define RGB_V_SetDigitalInput()  (_TRISD7 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RD7 GPIO Pin which has a custom name of RGB_V as Output
 * @param    none
 * @return   none  
 */
#define RGB_V_SetDigitalOutput() (_TRISD7 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE0 GPIO Pin which has a custom name of LED1 to High
 * @pre      The RE0 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define LED1_SetHigh()          (_LATE0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE0 GPIO Pin which has a custom name of LED1 to Low
 * @pre      The RE0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED1_SetLow()           (_LATE0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE0 GPIO Pin which has a custom name of LED1
 * @pre      The RE0 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED1_Toggle()           (_LATE0 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE0 GPIO Pin which has a custom name of LED1
 * @param    none
 * @return   none  
 */
#define LED1_GetValue()         _RE0

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE0 GPIO Pin which has a custom name of LED1 as Input
 * @param    none
 * @return   none  
 */
#define LED1_SetDigitalInput()  (_TRISE0 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE0 GPIO Pin which has a custom name of LED1 as Output
 * @param    none
 * @return   none  
 */
#define LED1_SetDigitalOutput() (_TRISE0 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE1 GPIO Pin which has a custom name of LED2 to High
 * @pre      The RE1 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define LED2_SetHigh()          (_LATE1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE1 GPIO Pin which has a custom name of LED2 to Low
 * @pre      The RE1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED2_SetLow()           (_LATE1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE1 GPIO Pin which has a custom name of LED2
 * @pre      The RE1 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define LED2_Toggle()           (_LATE1 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE1 GPIO Pin which has a custom name of LED2
 * @param    none
 * @return   none  
 */
#define LED2_GetValue()         _RE1

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE1 GPIO Pin which has a custom name of LED2 as Input
 * @param    none
 * @return   none  
 */
#define LED2_SetDigitalInput()  (_TRISE1 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE1 GPIO Pin which has a custom name of LED2 as Output
 * @param    none
 * @return   none  
 */
#define LED2_SetDigitalOutput() (_TRISE1 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE9 GPIO Pin which has a custom name of SWITCH3 to High
 * @pre      The RE9 must be set as Output Pin             
 * @param    none
 * @return   none  
 */
#define SWITCH3_SetHigh()          (_LATE9 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Sets the RE9 GPIO Pin which has a custom name of SWITCH3 to Low
 * @pre      The RE9 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define SWITCH3_SetLow()           (_LATE9 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Toggles the RE9 GPIO Pin which has a custom name of SWITCH3
 * @pre      The RE9 must be set as Output Pin
 * @param    none
 * @return   none  
 */
#define SWITCH3_Toggle()           (_LATE9 ^= 1)

/**
 * @ingroup  pinsdriver
 * @brief    Reads the value of the RE9 GPIO Pin which has a custom name of SWITCH3
 * @param    none
 * @return   none  
 */
#define SWITCH3_GetValue()         _RE9

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE9 GPIO Pin which has a custom name of SWITCH3 as Input
 * @param    none
 * @return   none  
 */
#define SWITCH3_SetDigitalInput()  (_TRISE9 = 1)

/**
 * @ingroup  pinsdriver
 * @brief    Configures the RE9 GPIO Pin which has a custom name of SWITCH3 as Output
 * @param    none
 * @return   none  
 */
#define SWITCH3_SetDigitalOutput() (_TRISE9 = 0)

/**
 * @ingroup  pinsdriver
 * @brief    Initializes the PINS module
 * @param    none
 * @return   none  
 */
void PINS_Initialize(void);

/**
 * @ingroup  pinsdriver
 * @brief    This function is callback for SWITCH3 Pin
 * @param    none
 * @return   none   
 */
void SWITCH3_CallBack(void);


/**
 * @ingroup    pinsdriver
 * @brief      This function assigns a function pointer with a callback address
 * @param[in]  InterruptHandler - Address of the callback function 
 * @return     none  
 */
void SWITCH3_SetInterruptHandler(void (* InterruptHandler)(void));


#endif
