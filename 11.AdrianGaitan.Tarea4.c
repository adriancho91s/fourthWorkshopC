/*
- Fecha: 14 de septiembre 2023
- Hora: 8:00 pm
- Versión del código: 1.3
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en pantalla los primeros n terminos de la serie de Triangular.
- Esta serie cuenta el número de puntos en una retícula triangular de lado n.
- Entrada: Un número entero n que representa la cantidad de términos que se desean imprimir.
- Salida: Los primeros n términos de la serie de Triangular.
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

//Librerías
#include <stdio.h>

//Función principal
int main () {
    //Declaración e inicialización de variables
    int cantidadTerminos = 0;//Cantidad de terminos deseados

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa imprime en pantalla los primeros n terminos de la serie de Triangular.\nEsta serie cuenta el número de puntos en una retícula triangular de lado n\n");
    printf("Ingrese la cantidad de términos que desea ver: ");
    scanf("%i", &cantidadTerminos);

    //Impresión de terminos deseados
    printf("\nLa cantidad %i de términos de la serie de triangular son: ", cantidadTerminos);
    for (int i = 1; i <= cantidadTerminos; i++) {
        if (i == cantidadTerminos) {
            printf("%i.", (i * (i + 1)) / 2);
        } else {
            printf("%i, ", (i * (i + 1)) / 2);
        }
    }

    return 0;
}