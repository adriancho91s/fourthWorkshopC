/*
- Fecha: 14 de septiembre 2023
- Hora: 6:30 pm
- Versión del código: 1.3
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa imprime en pantalla los terminos de la serie de Catalan,
- que solicite el usuario.
- Entrada: Un número entero n que representa la cantidad de términos que se desean imprimir.
- Salida: Los primeros n términos de la serie de Catalan.
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

//Librerías
#include <stdio.h>

// Función para calcular el factorial de un número
double calcularFactorial(double numero) {
    double resultado = 1;
    for (double i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int cantidadTerminos = 0;

    printf("Este programa imprime en pantalla hasta el termino enesimo que solicites.\n De la serie Catalan es una secuencia de números que aparece en diversos problemas de conteo en matemáticas\n Comienza con los números 1, 1 y los siguientes términos se calculan como la suma de los productos de los términos anteriores.\n");
    printf("Ingrese la cantidad de términos de la serie de Catalan que desea ver: ");
    scanf("%i", &cantidadTerminos);

    printf("\nLos primeros %i términos de la serie de Catalan son: ", cantidadTerminos);

    for (int enesimo = 0; enesimo < cantidadTerminos; enesimo++) {
        if (enesimo == cantidadTerminos - 1) {
            printf("%.0f.", calcularFactorial(2 * enesimo) / (calcularFactorial(enesimo) * calcularFactorial(enesimo + 1)));
        } else {
            printf("%.0f, ", calcularFactorial(2 * enesimo) / (calcularFactorial(enesimo) * calcularFactorial(enesimo + 1)));
        }
    }

    return 0;
}
