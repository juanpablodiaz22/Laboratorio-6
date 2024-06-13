#include "stack.h"
#include <stdio.h>

int main() {
    Stack stack;           // Se declara una pila
    initStack(&stack);     // Se inicializa la pila

    // Se demuestran las operaciones en la pila
    printf("Push: Se agrega 10 a la pila\n");
    push(&stack, 10);
    printf("Peek: El elemento superior de la pila es: %d\n", peek(&stack));  

    printf("Push: Se agrega 20 a la pila\n");
    push(&stack, 20);
    printf("Peek: El elemento superior de la pila es: %d\n", peek(&stack));  

    printf("Push: Se agrega 30 a la pila\n");
    push(&stack, 30);
    printf("Peek: El elemento superior de la pila es: %d\n", peek(&stack));  

    printf("Pop: Se elimina %d de la pila\n", pop(&stack));  // Se elimina y muestra el elemento superior
    printf("Peek: El nuevo elemento superior de la pila es: %d\n", peek(&stack));  // Se muestra el nuevo elemento superior

    printf("Pop: Se elimina %d de la pila\n", pop(&stack));  
    printf("Peek: El nuevo elemento superior de la pila es: %d\n", peek(&stack));  

    printf("Pop: Se elimina %d de la pila\n", pop(&stack));  

    // Se verifica si la pila esta vacia
    if (isEmpty(&stack)) {
        printf("La pila está vacía. Ya no hay mas elementos. \n");
    }

    // Se libera la memoria de la pila
    freeStack(&stack);

    return 0;
}