Funcion printChar(character, cantidad)
    Para i <- 1 Hasta cantidad Hacer
        Escribir (caracter) character
    FinPara
FinFuncion

Funcion printTriangleAscii(espacios, letras, ascii)
    Para i <- 0 Hasta espacios - 1 Hacer
        printChar(' ', i)
        printChar(ascii, letras)
        Escribir ""
        // Sleep está sujeto a compatibilidad con lenguaje a usar
        letras <- letras - 2
        ascii <- ascii - 2
    FinPara
FinFuncion

Algoritmo AnimacionAscii
    Escribir "Este programa imprime en pantalla una animación con caracteres ascii."
    Escribir "Empieza una linea con 13 caracteres del ascii 80, y en la siguiente línea reduce"
    Escribir "la cantidad de letras en 2, y reduce el carácter ascii en 2, e imprime un espacio más."
    Escribir "Hasta que queda un solo caracter en la última línea."
	
    printTriangleAscii(7, 13, 80)
FinAlgoritmo
