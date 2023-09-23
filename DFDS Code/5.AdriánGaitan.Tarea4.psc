Funcion resultado <- calculatePerrin(enesimo)
    Definir primerTermino, segundoTermino, tercerTermino, resultado Como Entero
    
    primerTermino <- 3
    segundoTermino <- 0
    tercerTermino <- 2
    resultado <- 0
	
    Si enesimo = 0 Entonces
        resultado <- 3
    FinSi
    
    Si enesimo = 1 Entonces
        resultado <- 0
    FinSi
    
    Si enesimo = 2 Entonces
        resultado <- 2
    FinSi
    
    Para i <- 3 Hasta enesimo Hacer
        resultado <- primerTermino + segundoTermino
        primerTermino <- segundoTermino
        segundoTermino <- tercerTermino
        tercerTermino <- resultado
    FinPara
FinFuncion

Algoritmo SeriePerrin
    Escribir "Este programa imprime en pantalla los primeros n términos de la serie de Perrin."
    
    Definir cantidadTerminos Como Entero
    cantidadTerminos <- 0
	
    Escribir "Ingrese la cantidad de términos de la serie de Perrin que desea ver: "
    Leer cantidadTerminos
	
    Escribir "El número ", cantidadTerminos, " de términos de la serie de Perrin es: "
    
    Para i <- 0 Hasta cantidadTerminos - 1 Hacer
        Si i = (cantidadTerminos - 1) Entonces
            Escribir calculatePerrin(i), "."
        Sino
            Escribir calculatePerrin(i), ", "
        FinSi
    FinPara
	
FinAlgoritmo
