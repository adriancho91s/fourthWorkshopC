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
        Escribir "Ingrese el número ", i, ": "
        Leer num
        Si num = 0 Entonces
            Escribir "El número ingresado no puede ser cero."
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
    Escribir "Cantidad de números mayores a 150: ", cantidadNumerosMayoresA150
    Escribir "Número mayor: ", numeroMayor
    Escribir "Número menor: ", numeroMenor
    Escribir "Cantidad de números negativos: ", cantidadNumerosNegativos
    Escribir "Promedio de los números positivos: ", promedioNumerosPositivos
FinFuncion

Algoritmo EstadisticasNumeros
    Definir cantidadNumeros Como Entero
    cantidadNumeros <- 75
	
    Escribir "Este programa recibe por consola 75 números diferentes de cero."
    Escribir "Luego imprime en pantalla la cantidad de números mayores a 150,"
    Escribir "número mayor y número menor encontrado en el grupo de números ingresados."
    Escribir "Cantidad de números negativos encontrados en el grupo de números ingresados."
    Escribir "Promedio de los números positivos encontrados."
	
    numeros(cantidadNumeros)
FinAlgoritmo
