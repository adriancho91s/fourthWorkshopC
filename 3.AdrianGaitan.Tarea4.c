/*
- Fecha: 14 de septiembre 2023
- Hora: 9:00 am
- Versión del código: 1.1
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en pantalla los primeros 10 terminos de la serie de Lucas
- Entrada: número de terminos deseados de la serie de Lucas (numero)
- Salida: los primeros 10 terminos de la serie de Lucas
*/

//Librerías
#include<stdio.h>

//Función Principal
int main () {
    //Declaración e inicialización de variables
    int numeroTerminos = 0, primerTermino=2 , segundoTermino=1, siguienteTermino=0;
    //Cantidad de terminos deseados, es el número de terminos que el usuario desea ver
    //Primer termino de la serie de Lucas
    //Segundo termino de la serie de Lucas
    //Siguiente termino de la serie de Lucas

    //Entrada de datos
    printf("Este programa imprime en pantalla el número de terminos deseados de la serie de Lucas.\n");
    printf("Ingrese la cantidad de términos de la serie de Lucas que desea ver: ");
    scanf("%i", &numeroTerminos);

    //Salida de datos
    printf("\nLa cantidad %i de términos de la serie de Lucas son: ", numeroTerminos);

    //Ciclo for para imprimir la serie de Lucas
    for ( int i = 1; i <= numeroTerminos; i++) {
        i == numeroTerminos ? printf( "%i.", primerTermino ) :
        printf( "%i, ", primerTermino );
        siguienteTermino= primerTermino + segundoTermino;
        primerTermino= segundoTermino;
        segundoTermino= siguienteTermino;
    }

    return 0;
}