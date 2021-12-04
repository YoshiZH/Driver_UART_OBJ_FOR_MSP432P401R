 // FileName:        BSP.h
 // Dependencies:    None.
 // Processor:       MSP432
 // Board:			 MSP432P401R
 // Program version: CCS V8.3 TI
 // Company:         Texas Instruments
 // Description:     Incluye la capa de abstracción de los drivers.
 // Authors:         José Luis Chacón M. y Jesús Alejandro Navarro Acosta.
 // Updated:         11/2018

#ifndef BSP_H_
#define BSP_H_

//#include "msp.h"
// Si hay problemas con los 'includes', busque la siguiente dirección.
#include <ti/devices/msp432p4xx/inc/msp.h>

#include "../Drivers/UART.h"

//Puntero del tipo UART, puede llamarse como se quiera.
UART *MyUART;

#endif /* BSP_H_ */
