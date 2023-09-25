/*
- Fecha: 15 de septiembre 2023
- Hora: 7:30 pm
- Versión del código: 1.4
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa recibe un número entero positivo como entrada 
- y luego imprime su factorial.
- Entrada: Un número entero positivo.
- Salida: El factorial del número ingresado.
- Restricciones: El número debe ser entero positivo.
*/
#include <stdio.h>

int main () {
    //Declaración e inicialización de variables
    int numero = 0;
    int resultado = 1;

    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa recibe un número entero positivo como entrada\ny luego imprime su factorial.\nIngrese el número que desea calcular su factorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El número debe ser positivo.\n");
        return 0;
    }

    //Impresión de factorial
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    printf("\nEl factorial de %d es: %d\n", numero, resultado);

    return 0;
}