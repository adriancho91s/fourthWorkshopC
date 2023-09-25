/*
- Fecha: 16 de septiembre 2023
- Hora: 9:00 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla una especie de animación con dos letras "A".
- Inicialmente están separadas por una distancia de 79 espacios, y van acercándose
- hasta que se encuentran en la mitad de la pantalla. 
- Entrada: Ninguna.
- Salida: Una animación con dos letras "A".
- Restriccion: solo se puede usar una función printf() por caracter, 
- printf(" ") printf("A") printf("A\n")
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
int main() {
    for (int distancia1 = 0, distancia2 = 79; distancia1 < 40; distancia1++, distancia2 -= 2) {
        printChar(' ', distancia1);
        printChar('A', 1);
        printChar(' ', distancia2);
        printChar('A', 1);
        printChar('\n', 1);

        system("sleep 0.155");
        system("clear");
    }

    return 0;
}
