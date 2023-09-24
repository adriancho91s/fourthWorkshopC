/*
- Fecha: 14 de septiembre 2023
- Hora: 9:00 pm
- Versión del código: 1.3
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- Este programa lee por consola un valor de entrada de tipo número,
- y luego imprime este número al reves.
- Entrada: Un número entero n que representa el número que se desea imprimir al reves.
- Salida: El número n impreso al reves.
- Restricciones: El número debe ser mayor o igual a 0.
*/

//Librerías
#include <stdio.h>

int main() {
    //Declaración e inicialización de variables
    long long int numero = 0, invertido = 0; //Número que se desea imprimir al reves
    //Variable invertido almacena el número invertido
    
    //Mensaje de bienvenida y solicitud de datos
    printf("Este programa lee por consola un valor de entrada de tipo número,\ny luego imprime este número al revés.\n");
    printf("Ingrese el número que desea imprimir al revés: ");
    scanf("%lld", &numero);

    //Convertir número a su reves
    for (; numero > 0; numero /= 10) {
        long long int digito = numero % 10;
        invertido = invertido * 10 + digito;
    }

    printf("\nEl número impreso al revés es: %lld\n", invertido);

    return 0;
}