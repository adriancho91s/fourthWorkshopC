/*
- Fecha: 17 de septiembre 2023
- Hora: 4:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa toma como valor de entrada un número x, en el que quiere evaluar la serie de Taylor
- y un valor enesimo, que es el número de términos que se quieren evaluar
- de la función sen(x) = x - x^3/3! + x^5/5! - x^7/7! ... (-1)^n x^(2n + 1)/(2n + 1)!
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
    double x = 0, enesimo = 0, resultado = 0;
    //enesimo es el número de términos y x es el valor en que va a ser evaluada la función

    //Mensaje de bienvenida
    printf("Bienvenido, este programa calcula la serie de Taylor de Sen(x)\n");

    //Entrada de datos
    printf("\nIngrese el valor de x: ");
    scanf("%lf", &x);
    printf("\nIngrese la cantidad de términos: ");
    scanf("%lf", &enesimo);

    for (int i = 0; i <= enesimo; i++) {
        double termino = pow(-1, i) * pow(x, 2 * i + 1) / calculateFactorial(2 * i + 1);
        resultado += termino;
    }

    //Impresión de resultados
    printf("\nEl resultado de la serie de Taylor Sen(%.2lf) es: %f\n", x , resultado);
    return 0;
}