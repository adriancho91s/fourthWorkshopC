/*
- Fecha: 17 de septiembre 2023
- Hora: 10:30 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en consola una figura que forma el contorno un triangulo con letras "Z"
- El triangulo se imprime con su base en la parte superior de la pantalla y su vértice en la
- parte inferior de la pantalla.
- Entrada: Ninguna.
- Salida: Un triangulo con letras "Z".
*/

//Librerías
#include <stdio.h>
#include <stdlib.h>

void printChar(char caracter, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("%c", caracter);
    }
}// Esta función imprime un caracter la cantidad de veces que se le indique

//Función principal
int main () {
    //Impresión de figura
    for (int interiorSpaces = 17, exteriorSpaces = 0, letters = 1; interiorSpaces >= -1; interiorSpaces -= 2, exteriorSpaces++) {
        if (interiorSpaces == -1) {
            printChar(' ', exteriorSpaces); 
            printChar('Z', letters);
            return 0;
        }
        printChar(' ', exteriorSpaces);
        printChar('Z', 1);
        printChar(' ', interiorSpaces);
        printChar('Z', letters);
        printChar('\n', 1);
        system("sleep 0.25");
    }

    return 0;
}