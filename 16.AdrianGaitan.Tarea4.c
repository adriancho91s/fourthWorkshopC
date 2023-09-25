/*
- Fecha: 1 de septiembre 2023
- Hora: 3:30 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa recibe como valor de entrada un número entero positivo n,
- y luego, en consola imprime la sumatoría de los factoriales de 0 a n.
- Entrada: Un número entero positivo.
- Salida: La sumatoria de los factoriales de 0 a n. N = 0! + 1! + 2! + ... + n! = ?
- Restricciones: El número debe ser entero positivo.
*/

//Librerías
#include <stdio.h>

double calculateFactorial(int enesimo) {
    double result = 1;
    for (int i = 1;  i <= enesimo; i++) {
        result *= i;
    }
    return result;
}// Esta función calcula el factorial de un número enesimo

int main () {
    //Declaración e inicialización de variables
    int numero = 0;//Número ingresado por el usuario se almacena en esta variable
    double sumatoria = 0;//Sumatoria de los factoriales de 0 a n (número dado por usuario)

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa recibe como valor de entrada un número entero positivo n,\ny luego, en consola imprime la sumatoria de los factoriales de 0 a n.\nN = 0! + 1! + 2! + ... + n! = ?\nIngrese el número que desea calcular su sumatoria de factoriales: ");
    scanf("%d", &numero);

    //Impresión de sumatoria de factoriales
    for (int i = 0; i <= numero; i++) {
        sumatoria += calculateFactorial(i);
    }
    printf("\nLa sumatoria de los factoriales de 0 a %d es: %.0lf\n", numero, sumatoria);

    return 0;
}