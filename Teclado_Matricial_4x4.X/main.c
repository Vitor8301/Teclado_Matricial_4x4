/*
 * File:   main.c
 * Author: 19179172
 *
 * Created on 28 de Abril de 2021, 15:35
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "dispLCD4vias.h"
#include "teclado.h"

void main(void)
{
    char str[] = "Tecla   ";
    
    dispLCD_init();
    teclado_init();

    while( 1 )
    {
        str[6] = teclado_scan();
        if(str[6]==0)
            str[6] = ' ';
        dispLCD(0,0, str );
    }
    return;
}
