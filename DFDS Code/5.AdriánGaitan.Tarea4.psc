Funcion resultado <- perrin(enesimo)
    Definir primerTermino, segundoTermino, tercerTermino, resultado Como Entero
	
    Si enesimo = 0 Entonces
        resultado <- 3
    FinSi
	
    Si enesimo = 1 Entonces
        resultado <- 0
    FinSi
	
    Si enesimo = 2 Entonces
        resultado <- 2
    FinSi
	
    Si enesimo > 2 Entonces
        primerTermino <- 3
        segundoTermino <- 0
        tercerTermino <- 2
		
        Para i <- 3 Hasta enesimo Hacer
            resultado <- primerTermino + segundoTermino
            primerTermino <- segundoTermino
            segundoTermino <- tercerTermino
            tercerTermino <- resultado
        FinPara
    FinSi
	
FinFuncion

Algoritmo SeriePerrin
    Definir primerTermino, segundoTermino, tercerTermino, resultado, cantidadTerminos, i Como Entero
	
    Escribir "Este programa imprime en pantalla los primeros n terminos de la serie de Perrin."
    Escribir "Ingrese la cantidad de términos de la serie de Perrin que desea ver: "
    Leer cantidadTerminos
	
    Si cantidadTerminos = 0 Entonces
        resultado <- 3
    FinSi
	
    Si cantidadTerminos = 1 Entonces
        resultado <- 0
    FinSi
	
    Si cantidadTerminos = 2 Entonces
        resultado <- 2
    FinSi
	
    Si cantidadTerminos > 2 Entonces
        primerTermino <- 3
        segundoTermino <- 0
        tercerTermino <- 2
		
        Para i <- 3 Hasta cantidadTerminos Hacer
            resultado <- primerTermino + segundoTermino
            primerTermino <- segundoTermino
            segundoTermino <- tercerTermino
            tercerTermino <- resultado
        FinPara
    FinSi
	
    Escribir "El número ", cantidadTerminos, " de términos de la serie de Perrin es: "
	
    Para i <- 0 Hasta cantidadTerminos Hacer
        Si i = cantidadTerminos Entonces
            Escribir perrin(i), "."
        Sino
            Escribir perrin(i), ", "
        FinSi
    FinPara
	
FinAlgoritmo



