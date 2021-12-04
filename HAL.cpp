//#include "Enlazador de alto y bajo nivel.h"
//#include "../Drivers/BSP.h"
uint32_t y,z ;
bool x=0,cool=0, modo=0;

void UART_initPD(){
    MyUART = new UART;
    MyUART->UART_inicializacion();
}

void UART_initUSR(uint32_t uart_1, uint32_t puerto, uint32_t pines_puerto, uint32_t clk, bool transmision,
                  bool bits, bool paridad, uint8_t baudios, bool comunicacion, bool sobremuestreo,
                  bool longitud, bool interrupcion1, bool interrupcion2){

    MyUART = new UART(uart_1, puerto, pines_puerto,  clk, transmision,
                  bits,  paridad,  baudios,  comunicacion,  sobremuestreo,
                   longitud,  interrupcion1,  interrupcion2);
    MyUART->UART_inicializacion();
}




