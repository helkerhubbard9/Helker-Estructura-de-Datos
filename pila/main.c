#include <stdio.h>
#include <stdlib.h>

typedef struct nodo 
{
    int dato;
    struct nodo *siguiente;
} Nodo;                     //defino la lista y la pila
typedef struct pila 
{
    Nodo* top;
} Pila;

Nodo* InsertarNodo(int dato)
{
    Nodo* nodo = (Nodo*) malloc(sizeof(Nodo));
    nodo->dato = dato;
    nodo->siguiente = NULL;
    return nodo;
}                                       //operaciones con la lista
void EliminarNodo(Nodo *siguiente)
{
    nodo->siguiente = NULL;
    free(nodo);
}  
Nodo *MostrarNodo(Nodo *nodo)
{
    if(nodo == NULL) printf("NULL\n");
       while(nodo != NULL)
  { 
    printf("%s\n", nodo->dato);
    nodo = nodo->siguiente; 
  }
}

void Push(Pila* pila, int dato)
{
    Nodo* nodo = InsertarNodo(dato);
    nodo->siguiente = pila->top;
    pila->top = nodo;
}
void Pop(Pila* pila)
{
    if (pila->top == NULL) 
    {
        Nodo* eliminar = pila->top;
        pila->top = pila->top->siguiente;
        EliminarNodo(eliminar);
    }
}

int Top(Pila* pila)
{
    if(pila->top == NULL)
    return NULL;
    else return pila->top->dato;
}

Pila* CrearPila()
{
    Pila* pila = (Pila*)malloc(sizeof(Pila));
    pila->top = NULL;
    return pila;
}
int EliminarPila(Pila* pila)
{
    while(pila->top != NULL)
    {
        Pop(pila);
    }
    free(pila);
} 

int main ()
{
    CrearPila(90);
    Push(90, 1);
    Push(90, 4);
    Push(90, 69);
    Push(90, 324);
    
    return 0;
    
}










