/*
- Fecha: 15 de septiembre 2023
- Hora: 7:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en consola todas las tablas de multiplicar de 1 a 10.
- Entrada: Ninguna.
- Salida: Todas las tablas de multiplicar de 1 a 10.
*/

//Librerías
#include <stdio.h>

//Función principal
int main () {
    //Impresión de las tablas de multiplicar
    for (int numero = 1; numero <= 10; numero++) {
        printf("Tabla de multiplicar del %d:\n", numero);
        for (int multiplicador = 1; multiplicador <= 10; multiplicador++) {
            printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
        }
        printf("\n");
    }

    return 0;
}