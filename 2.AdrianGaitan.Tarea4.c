/*
- Fecha: 13 de septiembre 2023
- Hora: 12:00 pm
- Versión del código: 1.1
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en pantalla la sumaa de cada termino de la serie de fibonacci,
- hasta antes de alcanzar un número mayor a 100
- Salida: resultado de la sumaa de cada termino en el rango establecido
*/
//Librerías
#include <stdio.h>

int main() {
    //Declaración e inicialización de variables
    int primerValor = 0, segundoValor = 1, suma = 0;

    //Mensaje de bienvenida
    printf("Este programa presenta la serie de Fibonacci hasta llegar sin sobrepasar el número 10,000.\n");

    //Ciclo for para imprimir la serie de fibonacci
    while (segundoValor < 100){
        printf("\x1b[32m%i,\x1b[0m ", primerValor);
        int acumulador = primerValor + segundoValor;
        primerValor = segundoValor;
        segundoValor = acumulador;
        suma += primerValor;
    }
    printf("\x1b[32m%i\x1b[0m", primerValor);
    printf("\x1b[32m y su suma es: %i\x1b[0m\n", suma);

    return 0;
}