

#ifndef BSP_H_
#define BSP_H_

//#include "msp.h"
// Si hay problemas con los 'includes', busque la siguiente dirección.
#include <ti/devices/msp432p4xx/inc/msp.h>

#include "../Drivers/UART.h"

//Puntero del tipo UART, puede llamarse como se quiera.
UART *MyUART;

#endif /* BSP_H_ */
