/*
- Fecha: 17 de septiembre 2023
- Hora: 11:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en consola una figura que forma el contorno un triangulo con letras "Z"
- El vertice del triangulo está ubicado en la parte superior de la pantalla y la base del
- triangulo está ubicada en la parte inferior de la pantalla.
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

int main () {
    for (int interiorSpaces = 0, exteriorSpaces = 9, letters = 1; exteriorSpaces >= 0;  interiorSpaces += 2, exteriorSpaces--) {
        if (interiorSpaces == 0) {
            printChar(' ', exteriorSpaces); 
            printChar('Z', letters);
            printChar('\n', 1);
            interiorSpaces = 1;
            exteriorSpaces --;
        }
        printChar(' ', exteriorSpaces);
        printChar('Z', 1);
        printChar(' ', interiorSpaces);
        printChar('Z', letters);
        printChar('\n', 1);
        system("sleep 0.25");
       
    }
}