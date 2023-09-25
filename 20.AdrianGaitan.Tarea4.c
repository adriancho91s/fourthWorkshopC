/*
- Fecha: 16 de septiembre 2023
- Hora: 9:30 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla una especie de animación de un set de "A",
- Empieza con una letra "A" en la primera fila y en la ultima columna, y va
- aumentando de 1 en 1 hasta que se encuentran con la columna 56. Es decir, va desde
- la columna 80 hasta la columna 56. Formando medio triangulo.
- Entrada: Ninguna.
- Salida: Una animación con letras "A".
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
    for (int espacios = 79, letras = 1; espacios >= 56; espacios--, letras++) {
        printChar(' ', espacios);
        printChar('A', letras);
        printChar('\n', 1);

        system("sleep 0.22");
    }

    return 0;
}