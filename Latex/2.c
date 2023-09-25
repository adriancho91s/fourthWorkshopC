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
    int suma = 0;
    // primerValor: Primer termino de la serie de fibonacci
    // segundoValor: Segundo termino de la serie de fibonacci
    // suma: Acumulador de la suma de los terminos de la serie de fibonacci
    // Se inicializa en 1, porque al sumar el segundo valor. En la primera iteración,
    // no se sumaría

    //Mensaje de bienvenida
    printf("Este programa presenta la suma de los elementos de la serie de Fibonacci entre 0 y 100.\nLos números a");

    //Ciclo for para imprimir la serie de fibonacci
    for (int primerValor = 0, segundoValor = 1; primerValor < 100; segundoValor = primerValor + segundoValor, primerValor = segundoValor - primerValor){
        printf("\x1b[32m%i,\x1b[0m ", primerValor);
        suma += primerValor;
    }
    
    printf("\x1b[32my su suma es: %i\x1b[0m\n", suma);

    return 0;
}