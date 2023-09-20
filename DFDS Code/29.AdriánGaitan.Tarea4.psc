Función resultado <- factorial(enesimo)
	Definir resultado Como Real
	resultado <- 1
	Para i<-1 Hasta enesimo Hacer
		resultado <- resultado*i
	FinPara
FinFunción

Función resultado <- taylor(x,enesimo)
	Definir resultado Como Real
	resultado <- 0
	Para i<-0 Hasta enesimo Con Paso 1 Hacer
		resultado <- resultado+(x^i)/factorial(i)
	FinPara
FinFunción

Algoritmo SerieTaylor
	Escribir 'Bienvenido, este programa calcula la serie de Taylor de e^(x)'
	Definir x, enesimo Como Entero
	Escribir 'Ingrese el valor de x: '
	Leer x
	Escribir 'Ingrese la cantidad de términos: '
	Leer enesimo
	Definir resultado Como Real
	resultado <- taylor(x,enesimo)
	Escribir 'El resultado de la serie de Taylor es: ', resultado
FinAlgoritmo