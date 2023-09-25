/*
- Fecha: 17 de septiembre 2023
- Hora: 11:30 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla una figura que corresponde a un triangulo con letras "A",
- el triangulo tiene el vertice en la izquierda de la pantalla y la base en la derecha.
- Entrada: Ninguna.
- Salida: Un triangulo con letras "A".
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
    int letters = 1;// Variable con la cantidad de letras que se van a imprimir inicialmente

    //Impresión de triangulo
    for (int spaces = 39; spaces > 34; spaces--, letters++) {
        printChar(' ', spaces);
        printChar('A', letters);
        printChar('\n', 1);
        system("sleep 0.03");
    }
    for (int spaces = 34; letters > 0; spaces++, letters --) {
        printChar(' ', spaces);
        printChar('A', letters);
        printChar('\n', 1);
        system("sleep 0.03");
    }
    return 0;
}