/*
- Fecha: 17 de septiembre 2023
- Hora: 10:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla una animación con letras "P". empieza con una linea
- de tamaño de 13, y se va reduciendo en sus extremos hasta que en la mitad de la pantalla
- queda una "P". Forma un triangulo invertido, con su base en la parte superior.
- Entrada: Ninguna.
- Salida: Una animación con letras "P".
*/

//Librerías
#include <stdio.h>
#include <stdlib.h>

void printChar(char caracter, int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("%c", caracter);
    }
}

//Función principal
int main () {
    //Impresión de animación
    for (int espacios = 0, letras = 13; espacios < 7; espacios++, letras -= 2) {
        printChar(' ', espacios);
        printChar('P', letras);
        printChar('\n', 1);
        system("sleep 0.18");
    }

    return 0;
}
