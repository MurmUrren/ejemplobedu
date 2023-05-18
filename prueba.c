#include<stdio.h>
#include<stdlib.h>

typedef struct ListaLigada
{
    int dato;
    struct ListaLigada *siguiente;
} ListaLigada;

void inicializar_lista(ListaLigada *head);
void insertarInicio(ListaLigada **lista, int dato);

int main(void) {
    ListaLigada *head;
    inicializar_lista(head);
    insertarInicio(&head, 5);
    printf("%d", head->dato);
    return 0;
}

void inicializar_lista(ListaLigada *head)
{
    head = NULL;
}

void insertarInicio(ListaLigada **lista, int dato) {
    ListaLigada *nuevo = (ListaLigada *)malloc(sizeof(ListaLigada));
    nuevo->dato = dato;
    nuevo->siguiente = *lista;
    *lista = nuevo;
}
