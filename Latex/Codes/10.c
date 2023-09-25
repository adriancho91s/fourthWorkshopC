/*
- Fecha: 14 de septiembre 2023
- Hora: 7:01 pm
- Versión del código: 1.3
- Presentado por: Adrián Fernando Gaitán Londoño Ing(c)
- Presentado a: Doctor, Ricardo Moreno Laverde
- Lenguaje: C
- Version del lenguaje: ISO/IEC 9899:2018 || C18
- Compilador: Apple clang version 14.0.0 (clang-1400.0.28.1)
- Universidad Tecnológica de Pereira
- Programa de Ingeniería de Sistemas y Computación
- El programa imprime en consola el número deseado de terminos
- de la serie Motzkin. M(n) = M(n-1) + Σ(k=0, n-2) M(k)M(n-2-k), donde M(0) = 1 y M(1) = 1.
- Entrada: Un número entero n que representa la cantidad de términos que se desean imprimir.
- Salida: Los primeros n términos de la serie de Motzkin.
- Restricciones: El número de términos debe ser mayor o igual a 0.
*/

//Librerías
#include <stdio.h>

// Función para calcular el término n de la serie de Motzkin
int calcularMotzkin(int enesimo) {
    if (enesimo == 0 || enesimo == 1) return 1;

    int primerTermino = 1, segundoTermino = 1, siguienteTermino = 0;

    for (int i = 2; i <= enesimo; i++) {
        siguienteTermino = (3 * (i - 1) * primerTermino + (2 * i + 1) * segundoTermino )/ (i + 2);
        primerTermino = segundoTermino;
        segundoTermino = siguienteTermino;
    }

    return segundoTermino;
}

int main() {
    //Declaración e inicialización de variables
    int numeroTerminos = 0;//Variable que almacena el número de términos que se desean imprimir

    //Entrada
    printf("La fórmula para el enésimo número de Motzkin es M(n) = M(n-1) + Σ(k=0, n-2) M(k)M(n-2-k), \ndonde M(0) = 1 y M(1) = 1.\nIngrese el número de términos que desea: ");
    scanf("%i", &numeroTerminos);

    //Impresión de terminos deseados
    for (int i = 0; i < numeroTerminos; i++) {
        if (i == numeroTerminos - 1) {
            printf("%d.", calcularMotzkin(i));
        } else {
            printf("%d, ", calcularMotzkin(i));
        }
    }
    return 0;
}
