Funcion resultado <- factorial(enesimo)
    Definir resultado Como Real
    resultado <- 1
    Para i <- 1 Hasta enesimo Hacer
        resultado <- resultado * i
    FinPara
FinFuncion

Funcion resultado <- stirlingNumber(enesimo, k) 
    Definir resultado Como Real
    resultado <- 0
    Para i <- 0 Hasta k Hacer
		resultado <- (resultado + (-1^(k -i)) * (i^enesimo)) / (factorial(i) * factorial (k - i))
    FinPara
    Si enesimo >= 0 Y enesimo = k Entonces
        resultado <- 1
    FinSi
    Si enesimo >= 1 Y k = 1 Entonces
        resultado <- 1
    FinSi
FinFuncion

Funcion resultado <- bellNumber(enesimo)
    Definir resultado Como Real
    resultado <- 0
    Para k <- 0 Hasta enesimo Hacer
        resultado <- resultado + stirlingNumber(enesimo, k)
    FinPara
FinFuncion

Algoritmo SerieBell
    Definir cantidadTerminos Como Entero
	
    Escribir "Este programa va imprimir los t�rminos que le solicites de la serie de Bell:"
    Escribir "Esta serie cuenta el n�mero de particiones no vac�as de un conjunto de n elementos."
    Escribir "Comienza con los n�meros 1, 1 y los siguientes t�rminos se calculan como la suma de"
    Escribir "los t�rminos anteriores multiplicados por los n�meros naturales consecutivos."
    Escribir "Ingrese a continuaci�n el n�mero de t�rminos deseados: "
    Leer cantidadTerminos
	
    Para i <- 0 Hasta cantidadTerminos - 1 Hacer
        Si i = cantidadTerminos - 1 Entonces
            Escribir (bellNumber(i)), "."
        Sino
            Escribir (bellNumber(i)), ", "
        FinSi
    FinPara
FinAlgoritmo
