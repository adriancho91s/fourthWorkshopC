# Makefile para compilar el programa
# Asegúrate de tener las bibliotecas SDL2, SDL2 Mixer y SDL2 Image instaladas.

# Nombre del programa
TARGET = image

# Compilador
CC = gcc

# Rutas de las bibliotecas y los encabezados de SDL2, SDL2 Mixer y SDL2 Image
SDL_LIBS = -lSDL2 -lSDL2_mixer -lSDL2_image
SDL_INCLUDE = -I/usr/local/include/SDL2

# Ruta del archivo de origen
SOURCE = image.c

# Opciones de compilación
CFLAGS = -Wall -o $(TARGET) $(SOURCE) $(SDL_LIBS) $(SDL_INCLUDE)

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS)

clean:
	rm -f $(TARGET)
