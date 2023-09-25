/*
- Fecha: 17 de septiembre 2023
- Hora: 2:30 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa toma como valor de entrada un número para asignarle a x y
- otro número para asignarle a n, en el que quiere evaluar la serie de Taylor
- del cos(x) = 1 - x^2/2! + x^4/4! - x^6/6! ... (-1)^n * x^(2n)/(2n)!
- Entrada: Un número x y un número n.
- Salida: El resultado de la serie de Taylor.
*/
//Librerías
#include <stdio.h>
#include <math.h>

double calculateFactorial(int enesimo) {
    double result = 1;
    for (int i = 1;  i <= enesimo; i++) {
        result *= i;
    }
    return result;
}// Esta función calcula el factorial de un número enesimo

//Función principal
int main () {
    //Declaración e inicialización de variables
    double x = 0, enesimo = 0, resultado = 0;//enesimo es el número de términos y x es el valor 
    //en que va a ser evaluada la función

    //Mensaje de bienvenida
    printf("Bienvenido, este programa calcula la serie de Taylor de cos(x)\n");

    //Entrada de datos
    printf("\nIngrese el valor de x: ");
    scanf("%lf", &x);
    printf("\nIngrese la cantidad de términos: ");
    scanf("%lf", &enesimo);

    for (int i = 0; i <= enesimo; i++) {
        double termino = pow(-1, i) * pow(x, 2 * i) / calculateFactorial(2 * i);
        resultado += termino;
    }

    printf("\nEl resultado de la serie de Taylor Cos(%.2lf) es: %f\n", x, resultado);

    return 0;
}