/*
- Fecha: 14 de septiembre 2023
- Hora: 10:00 am
- Versión del código: 1.1
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en pantalla el número de terminos que solicita el usuario
- Entrada: número de terminos deseados de la serie de Padovan (numero)
- Salida: los primeros n terminos de la serie de Padovan
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

//Librerías
#include<stdio.h>

//Funciones custom
int calculatePadovan(int enesimo) {
    int primerTermino = 1, segundoTermino = 0, tercerTermino = 0, resultado = 0;
    //Primeros terminos de la serie de Padovan y el acumulador del resultado
    
    if (enesimo == 1) return 1;
    if (enesimo == 2) return 0;
    if (enesimo == 3) return 0;

    for (int i = 4; i <= enesimo; i++) {
        resultado = primerTermino + segundoTermino;
        primerTermino = segundoTermino;
        segundoTermino = tercerTermino;
        tercerTermino = resultado;
    }
    return resultado;
}

int main () {
    //Declaración e inicialización de variables
    int cantidadTerminos = 0;//Cantidad de terminos deseados

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa imprime en pantalla los primeros n terminos de la serie de Padovan.\n");
    printf("Ingrese la cantidad de términos de la serie de Padovan que desea ver: ");
    scanf("%i", &cantidadTerminos);

    //Impresión de terminos deseados
    printf("\nLa cantidad %i de términos de la serie de Padovan son: ", cantidadTerminos);
    for (int i = 1; i <= cantidadTerminos; i++) {
        i == cantidadTerminos ? 
        printf("%i.", calculatePadovan(i)) : 
        printf("%i, ", calculatePadovan(i));
    }
    return 0;
}