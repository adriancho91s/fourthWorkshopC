Algoritmo AnalisisNumeros
    // Declaración e inicialización de variables
    Definir cantidadNumeros Como Entero
    cantidadNumeros <- 75
    Definir cantidadNumerosMayoresA150, numeroMayor, numeroMenor, cantidadNumerosNegativos, sumaNumerosPositivos, cantidadNumerosPositivos Como Entero
    cantidadNumerosMayoresA150 <- 0
    numeroMayor <- -Infinito
    numeroMenor <- Infinito
    cantidadNumerosNegativos <- 0
    sumaNumerosPositivos <- 0
    cantidadNumerosPositivos <- 0
	
    // Mensaje de bienvenida y solicitud de datos
    Escribir "Este programa recibe por consola 75 números diferentes de cero."
    Escribir "Luego imprime en pantalla la cantidad de números mayores a 150,"
    Escribir "número mayor y número menor encontrado en el grupo de números ingresados."
    Escribir "Cantidad de números negativos encontrados en el grupo de números ingresados."
    Escribir "Promedio de los números positivos encontrados."
	
    Para i <- 0 Hasta cantidadNumeros - 1 Hacer
        Escribir "Ingrese el número ", i + 1, ": "
        Leer numeroIngresado
        Si numeroIngresado = 0 Entonces
            Escribir "El número ingresado no puede ser cero."
			i <- i - 1
        Sino
            Si numeroIngresado > 150 Entonces
                cantidadNumerosMayoresA150 <- cantidadNumerosMayoresA150 + 1
            FinSi
			
            si numeroIngresado > numeroMayor Entonces
				numeroMayor <- numeroIngresado
			FinSi
			
		    si numeroIngresado < numeroMenor Entonces
				numeroMenor <- numeroIngresado
			FinSi
			
            Si numeroIngresado < 0 Entonces
                cantidadNumerosNegativos <- cantidadNumerosNegativos + 1
            FinSi
			
            Si numeroIngresado > 0 Entonces
                sumaNumerosPositivos <- sumaNumerosPositivos + numeroIngresado
                cantidadNumerosPositivos <- cantidadNumerosPositivos + 1
            FinSi
        FinSi
    FinPara
	
    // Cálculo del promedio de los números positivos
    Definir promedioNumerosPositivos Como Real
    Si cantidadNumerosPositivos > 0 Entonces
        promedioNumerosPositivos <- sumaNumerosPositivos / cantidadNumerosPositivos
    Sino
        promedioNumerosPositivos <- 0
    FinSi
	
    // Impresión de resultados
    Escribir "Cantidad de números mayores a 150:", cantidadNumerosMayoresA150
    Escribir "Número mayor:", numeroMayor
    Escribir "Número menor:", numeroMenor
    Escribir "Cantidad de números negativos:", cantidadNumerosNegativos
    Escribir "Promedio de los números positivos:", promedioNumerosPositivos

FinAlgoritmo
