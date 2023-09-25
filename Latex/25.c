/*
- Fecha: 17 de septiembre 2023
- Hora: 10:00 am
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en pantalla una figura en el centro de la pantalla, la figura
- es un rombo con una altura de 7 caracteres y un ancho de 7 caracteres. 
- La figura se imprime desde el centro de la pantalla hasta los extremos de la misma.
- Entrada: Ninguna.
- Salida: Un rombo con una altura de 7 caracteres y un ancho de 7 caracteres.
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
    //Impresión de figura
    //El primer número corresponde a la cantidad de espacios con que inicia
    //la figura, y el segundo número corresponde a la cantidad de letras con que inicia la figura
    for (int spaces = 9, letters = 1; spaces > 6; spaces--, letters += 2) {
        printChar(' ', spaces);
        printChar('Z', letters);
        printChar('\n', 1);
        system("sleep 0.25");
    }
    for (int spaces = 6, letters = 7; spaces < 10; spaces++, letters -= 2) {
        printChar(' ', spaces);
        printChar('Z', letters);
        printChar('\n', 1);
        system("sleep 0.25");
    }
    return 0;
}