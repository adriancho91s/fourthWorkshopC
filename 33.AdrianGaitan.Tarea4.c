/*
- Fecha: 17 de septiembre 2023
- Hora: 3:30 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa toma como valor de entrada un número x y enesimo, en el que quiere evaluar la serie de Taylor
- y el número de términos que desea respectivamente de la función ln(x) = (x - 1)^1/1 - (x - 1)^2/2 + (x - 1)^3/3 ... (x - 1)^n/n
- Entrada: Un número x y un número n.
- Salida: El resultado de la serie de Taylor.
*/

//Librerías
#include <stdio.h>
#include <math.h>

//Función principal
int main () {
    //Declaración e inicialización de variables
    double x = 0, enesimo = 0, resultado = 0;
    //enesimo es el número de términos y x es el valor en que va a ser evaluada la función

    //Mensaje de bienvenida
    printf("Bienvenido, este programa calcula la serie de Taylor de ln(x)\n");

    //Entrada de datos
    printf("\nIngrese el valor de x: ");
    scanf("%lf", &x);
    printf("\nIngrese la cantidad de términos: ");
    scanf("%lf", &enesimo);

    for (int i = 1; i <= enesimo; i++) {
        double termino = pow(-1, i + 1) * pow(x - 1, i) / i;
        resultado += termino;
    }

    //Impresión de resultados
    printf("\nEl resultado de la serie de Taylor ln(%.3lf) es: %lf\n", x, resultado);
    return 0;
}