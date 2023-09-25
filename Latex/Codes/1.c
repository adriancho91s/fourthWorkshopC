/*
- Fecha: 13 de septiembre 2023
- Hora: 9:00 am
- Versión del código: 1.1
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprimi en pantalla la serie de fibonacci hasta el número 10000
- Salida: La serie de fibonacci hasta el número 10000
*/

//Librerías
#include <stdio.h>


//Función Principal
int main () {

    //Mensaje de bienvenida
    printf("Este programa presenta la serie de Fibonacci como la serie que comienza con los dígitos 0 y 1 y va\nsumando progresivamente los dos últimos elementos de la serie, así: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...\nPara este programa, se presentará la serie de Fibonacci hasta llegar sin sobrepasar el número 10,000.\n");
    
    for (int primerValor = 0, segundoValor = 1; primerValor < 10000; segundoValor += primerValor, primerValor = segundoValor - primerValor) {
        if (segundoValor > 10000) {
            printf("\x1b[31m%i.\x1b[0m\n", primerValor);
            } else {
                printf("\x1b[31m%i, \x1b[0m ", primerValor);
            }
    }

    return 0;
}