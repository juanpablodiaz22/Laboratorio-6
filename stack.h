#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include <stdlib.h>

// Se define el nodo
typedef struct Node {
    int data;            // Dato almacenado en el nodo
    struct Node* next;   // Puntero al siguiente nodo
} Node;

// Se define la pila
typedef struct Stack {
    Node* top;           // Puntero al nodo superior de la pila
} Stack;

// Funciones del stack
void initStack(Stack* stack);  // Inicializa la pila
void push(Stack* stack, int data);  // Agrega un elemento a la parte superior de la pila
int pop(Stack* stack);  // Elimina y devuelve el elemento en la parte superior de la pila
int peek(Stack* stack);  // Devuelve el elemento en la parte superior de la pila sin eliminarlo
int isEmpty(Stack* stack);  // Verifica si la pila está vacía
void freeStack(Stack* stack);  // Libera la memoria de la pila

#endif // STACK_H