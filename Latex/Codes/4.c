/*
- Fecha: 24 de septiembre 2023
- Hora: 8:30 pm
- Versión del código: 1.0
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla los primeros n terminos de la serie de Perrin.
- Entrada: Un número entero n que representa el enésimo término de la serie de Perrin.
- Salida: El enésimo término de la serie de Perrin.
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

//Librerías
#include <stdio.h>

//Función principal
int main() {
    int limite = 0, siguienteTermino = 0;

    printf("Este programa imprime en pantalla los primeros n términos de la serie de Pell.\n");
    printf("Ingrese la cantidad de términos de la serie de Pell que desea ver: ");
    scanf("%i", &limite);

    if (limite <= 0) {
        printf("El número de términos debe ser mayor que cero.\n");
        return 1;
    }

    //Imprimir los primeros n términos de la serie de Pell
    printf("\nLos primeros %i términos de la serie de Pell son: 0", limite);
    for (int primerValor = 0, segundoValor = 1, i = 1; i < limite; i++) {
        printf(", %d", segundoValor);
        siguienteTermino = segundoValor;
        segundoValor = 2 * segundoValor + primerValor;
        primerValor = siguienteTermino;
    }

    return 0;
}
