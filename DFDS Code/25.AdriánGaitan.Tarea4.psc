Funcion printChar(character , cantidad)
    Para i <- 1 Hasta cantidad Hacer
        Escribir character
    FinPara
FinFuncion

Funcion printFigureDown(spaces, letters)
    Para i <- spaces Hasta 9 Con Paso 1 Hacer
		   printChar(' ', spaces)
            printChar('Z', letters)
            Escribir ""
            // Sleep está sujeto a compatibilidad con lenguaje a usar
            letters <- letters - 2
    FinPara
FinFuncion

Funcion printFigureUp(spaces, letters )
    Para i <- spaces Hasta 6 Con Paso -1 Hacer
            printChar(' ', spaces)
            printChar('Z', letters)
            Escribir ""
            // Sleep no es compatible en Pseint, se omite la pausa
            letters <- letters + 2
    FinPara
    printFigureDown(6, 7)
FinFuncion

Algoritmo ImpresionRombo
    printFigureUp(9, 1)
FinAlgoritmo
