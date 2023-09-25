/*
- Fecha: 14 de septiembre 2023
- Hora: 6:00 pm
- Versión del código: 1.1
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantala la serie d narayana hasta el enésimo término.
- Entrada: Un número entero n que representa el enésimo término de la serie de Narayana.
- Salida: El enésimo término de la serie de Narayana.
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

//Librerías
#include<stdio.h>

// Funciones
int calculateNarayana(int enesimo) {
    if (enesimo >= 1 && enesimo <= 3) return 1;
    int primerTermino = 1, 
        segundoTermino = 1, 
        tercerTermino = 1, 
        siguienteTermino = 0;
    //Primeros terminos de la serie de Narayana y el acumulador del resultado

    for (int i = 4; i <= enesimo; i++) {
        siguienteTermino = primerTermino + tercerTermino;
        primerTermino = segundoTermino;
        segundoTermino = tercerTermino;
        tercerTermino = siguienteTermino;
    }
    return tercerTermino;
}//Función que calcula el enésimo término de la serie de Narayana

//Función Principal
int main() {
    //Declaración e inicialización de variables
    int cantidadTerminos = 0;//Cantidad de terminos deseados

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa imprime en pantalla los primeros n terminos de la secuencia de Narayana.\nEsta serie comienza con los números 1, 1 y 1. Los siguientes términos\nse calculan como la suma del término anterior y el número de parejas\nde términos consecutivos anteriores que son diferentes.\n");
    printf("Ingrese la cantidad de términos de la secuencia de Narayana que deseas que se impriman: ");
    scanf("%i", &cantidadTerminos);

    //Impresión de terminos deseados
    printf("\n\nLa cantidad %i de términos de la serie de Narayana son: ", cantidadTerminos);
    for (int i = 1; i <= cantidadTerminos; i++) {
        if (i == cantidadTerminos) {
            printf("%d", calculateNarayana(i));
        } else {
            printf("%d, ", calculateNarayana(i));
        }
    }
    return 0;
}