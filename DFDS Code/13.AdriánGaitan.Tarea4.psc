Algoritmo AnalisisNumeros
    // Declaraci�n e inicializaci�n de variables
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
    Escribir "Este programa recibe por consola 75 n�meros diferentes de cero."
    Escribir "Luego imprime en pantalla la cantidad de n�meros mayores a 150,"
    Escribir "n�mero mayor y n�mero menor encontrado en el grupo de n�meros ingresados."
    Escribir "Cantidad de n�meros negativos encontrados en el grupo de n�meros ingresados."
    Escribir "Promedio de los n�meros positivos encontrados."
	
    Para i <- 0 Hasta cantidadNumeros - 1 Hacer
        Escribir "Ingrese el n�mero ", i + 1, ": "
        Leer numeroIngresado
        Si numeroIngresado = 0 Entonces
            Escribir "El n�mero ingresado no puede ser cero."
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
	
    // C�lculo del promedio de los n�meros positivos
    Definir promedioNumerosPositivos Como Real
    Si cantidadNumerosPositivos > 0 Entonces
        promedioNumerosPositivos <- sumaNumerosPositivos / cantidadNumerosPositivos
    Sino
        promedioNumerosPositivos <- 0
    FinSi
	
    // Impresi�n de resultados
    Escribir "Cantidad de n�meros mayores a 150:", cantidadNumerosMayoresA150
    Escribir "N�mero mayor:", numeroMayor
    Escribir "N�mero menor:", numeroMenor
    Escribir "Cantidad de n�meros negativos:", cantidadNumerosNegativos
    Escribir "Promedio de los n�meros positivos:", promedioNumerosPositivos

FinAlgoritmo
