#!/bin/bash

cd /ruta/del/directorio

# Bucle para renombrar archivos
for archivo in *.c; do
    numero=$(echo "$archivo" | sed -n 's/\([0-9]*\)\.c/\1/p')
    nuevo_nombre="${numero}.AdrianGaitan.Tarea4.c"
    mv "$archivo" "$nuevo_nombre"
done
