

#ifndef _hvac_h_
#define _hvac_h_


#pragma once

#define __MSP432P401R__
#define  __SYSTEM_CLOCK    48000000 // Frecuencias funcionales recomendadas: 12, 24 y 48 Mhz.

/* Archivos de cabecera importantes. */
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Drivers/BSP.h"


/*Funciones de inicializacion del UART*/
extern void UART_initPD(void);
extern void UART_initUSR(uint32_t uart_1, uint32_t puerto, uint32_t pines_puerto, uint32_t clk, bool transmision,
                         bool bits, bool paridad, uint8_t baudios, bool comunicacion, bool sobremuestreo,
                         bool longitud, bool interrupcion1, bool interrupcion2);



#endif
