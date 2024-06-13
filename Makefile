# Variables
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = main

# Regla principal: se compila y se enlaza el proyecto
all: $(TARGET)

# Se enlazan los archivos objeto y se crea el ejecutable
$(TARGET): main.o stack.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o stack.o

# Se compila main.c
main.o: main.c stack.h
	$(CC) $(CFLAGS) -c main.c

# Se compila stack.c
stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

# Se limpian los archivos generados
clean:
	rm -f *.o $(TARGET)