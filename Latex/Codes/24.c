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
- Este programa imprime en pantalla una especie de animación con dos letras "A".
- Inicialmente se imprime una letra "A" separada por 5 espacios de la otra letra "A",
- luego se van acercando hasta que se encuentran en la mitad de la pantalla, y luego
- se separan hasta que la distancia entre ellas es de 5 espacios.
- Entrada: Ninguna.
- Salida: Una animación con dos letras "A".
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
    for (int espacios = 5, letras = 1; espacios >= 0; espacios -= 2, letras ++) {
        printChar(' ', 27);
        printChar('A', letras);
        printChar(' ', espacios);
        printChar('A', letras);
        printChar('\n', 1);
        system("sleep 0.18");
    }
    printChar(' ', 27);
    printChar('A', 7);
    printChar('\n', 1);
    for (int espacios = 1, letras = 3; espacios <= 5; espacios += 2, letras --) {
        printChar(' ', 27);
        printChar('A', letras);
        printChar(' ', espacios);
        printChar('A', letras);
        printChar('\n', 1);
        system("sleep 0.18");
    }

    return 0;
}