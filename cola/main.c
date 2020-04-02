#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo
{
    Node* node;
    struct Nodo* siguiente;
} Nodo;

typedef struct Cola 
{
    Node* first;
    Node* last;
} Cola;

Node* CrearNodo(Node* node)
{
    Node* nodo = (Node*) malloc(sizeof(Node));
    nodo->node = node;
    nodo->siguiente = NULL;
    return nodo;
}
void EliminarNodo(Node* node)
{
    nodo->node=NULL;
    nodo->siguiente=NULL;
    free(nodo);
}

Cola* CrearCola()
{
    Cola* cola= (Cola*) malloc(sizeof(Cola));
    cola->first = cola->last =NULL;
    return cola;
}
void EliminarCola(Cola* cola)
{
 while(cola->first)
 {
 Eliminar(cola);
 }
 free(cola);
}
void PonerEnCola(Cola* cola, Node* node)
{
       Node* nodo = CrearNodo(node);
    if(!cola->primer)
    {
        cola->first=nodo;
        cola->last=node;
    }
    else
    {
        cola->last->siguiente =nodo;
        cola->last=nodo;
    }
}
Node* Check(Cola* cola)
{
    if(cola->first)
    {
        return cola->first->node;
    }
    else
    {
        return NULL;
    }
}
void Eliminar(Cola* cola)
{
    if(cola->first)
    {
        Node* eliminated = cola->first;
        cola->first = cola->first->siguiente;
        EliminarNodo(eliminated);
        if(!cola->first)
        cola->last = NULL;
    }
}

int main()
{
}




