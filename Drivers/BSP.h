 // FileName:        BSP.h
 // Dependencies:    None.
 // Processor:       MSP432
 // Board:			 MSP432P401R
 // Program version: CCS V8.3 TI
 // Company:         Texas Instruments
 // Description:     Incluye la capa de abstracci�n de los drivers.
 // Authors:         Jos� Luis Chac�n M. y Jes�s Alejandro Navarro Acosta.
 // Updated:         11/2018

#ifndef BSP_H_
#define BSP_H_

//#include "msp.h"
// Si hay problemas con los 'includes', busque la siguiente direcci�n.
#include <ti/devices/msp432p4xx/inc/msp.h>

#include "../Drivers/UART.h"

//Puntero del tipo UART, puede llamarse como se quiera.
UART *MyUART;

#endif /* BSP_H_ */
