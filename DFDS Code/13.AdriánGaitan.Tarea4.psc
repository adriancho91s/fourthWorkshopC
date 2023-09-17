Funcion numeros(cantidadNumeros)
    Definir cantidadNumerosMayoresA150, numeroMayor, numeroMenor, cantidadNumerosNegativos, sumaNumerosPositivos, cantidadNumerosPositivos Como Entero
    cantidadNumerosMayoresA150 <- 0
    numeroMayor <- -Infinito
    numeroMenor <- Infinito
    cantidadNumerosNegativos <- 0
    sumaNumerosPositivos <- 0
    cantidadNumerosPositivos <- 0
	
    Para i <- 1 Hasta cantidadNumeros Hacer
        Definir num Como Entero
        Escribir "Ingrese el n�mero ", i, ": "
        Leer num
        Si num = 0 Entonces
            Escribir "El n�mero ingresado no puede ser cero."
            i <- i - 1
        Sino
            Si num > 150 Entonces
                cantidadNumerosMayoresA150 <- cantidadNumerosMayoresA150 + 1
            FinSi
			
            si num > numeroMayor Entonces
				numeroMayor <- num
			FinSi
			
		    si num < numeroMenor Entonces
				numeroMenor <- num
			FinSi
			
            Si numero < 0 Entonces
                cantidadNumerosNegativos <- cantidadNumerosNegativos + 1
            FinSi
			
            Si numero > 0 Entonces
                sumaNumerosPositivos <- sumaNumerosPositivos + numero
                cantidadNumerosPositivos <- cantidadNumerosPositivos + 1
            FinSi
        FinSi
    FinPara
	
    Definir promedioNumerosPositivos Como Real
    promedioNumerosPositivos <- sumaNumerosPositivos / cantidadNumerosPositivos
    Escribir "Cantidad de n�meros mayores a 150: ", cantidadNumerosMayoresA150
    Escribir "N�mero mayor: ", numeroMayor
    Escribir "N�mero menor: ", numeroMenor
    Escribir "Cantidad de n�meros negativos: ", cantidadNumerosNegativos
    Escribir "Promedio de los n�meros positivos: ", promedioNumerosPositivos
FinFuncion

Algoritmo EstadisticasNumeros
    Definir cantidadNumeros Como Entero
    cantidadNumeros <- 75
	
    Escribir "Este programa recibe por consola 75 n�meros diferentes de cero."
    Escribir "Luego imprime en pantalla la cantidad de n�meros mayores a 150,"
    Escribir "n�mero mayor y n�mero menor encontrado en el grupo de n�meros ingresados."
    Escribir "Cantidad de n�meros negativos encontrados en el grupo de n�meros ingresados."
    Escribir "Promedio de los n�meros positivos encontrados."
	
    numeros(cantidadNumeros)
FinAlgoritmo
