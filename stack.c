#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// Se inicializa la pila
void initStack(Stack* stack) {
    stack->top = NULL;  // Hace el puntero superior como NULL
}

// Se agrega un elemento a la parte superior de la pila
void push(Stack* stack, int data) {
    // Se crea un nuevo nodo y asigna memoria para él
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        fprintf(stderr, "Error al asignar memoria.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;        // Se asigna el dato al nuevo nodo
    newNode->next = stack->top;  // Se apunta al nodo anterior que era el superior
    stack->top = newNode;        // El nuevo nodo ahora es el superior
}

// Se elimina y devuelve el elemento en la parte superior de la pila
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        fprintf(stderr, "Error: intento de pop en una pila vacía.\n");
        exit(EXIT_FAILURE);
    }
    Node* tempNode = stack->top;     // Temporalmente almacena el nodo superior
    int poppedData = tempNode->data; // Se guarda el dato del nodo superior
    stack->top = stack->top->next;   // El siguiente nodo se convierte en el superior
    free(tempNode);                  // Se libera la memoria del nodo eliminado
    return poppedData;               // Se devuelve el dato eliminado
}

// Se devuelve el elemento en la parte superior de la pila sin eliminarlo
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        fprintf(stderr, "Error: intento de peek en una pila vacía.\n");
        exit(EXIT_FAILURE);
    }
    return stack->top->data;  // Se devuelve el dato del nodo superior
}

// Se verifica si la pila está vacía
int isEmpty(Stack* stack) {
    return stack->top == NULL;  // La pila está vacía si el nodo superior es NULL
}

// Se libera la memoria de todos los nodos en la pila
void freeStack(Stack* stack) {
    while (!isEmpty(stack)) {
        pop(stack);  // Se elimina todos los nodos de la pila
    }
}