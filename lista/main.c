#include <stdio.h>
#include <stdlib.h>

typedef struct nodo 
{
    char *nombre;
    struct nodo *siguiente;
} Contacto;

Contacto *ListaContacto(Contacto *Lista)
{
    Lista = NULL;
    return Lista;
}

Contacto *AgregarContacto(Contacto *Lista, char *nombre)
{
    Contacto *nuevoContacto, *auxiliar;
    nuevoContacto = (Contacto *) malloc(sizeof(Contacto));
    nuevoContacto -> nombre = nombre;
    nuevoContacto -> siguiente = NULL;
    if(Lista==NULL) {Lista = nuevoContacto;}
    else 
    {
        auxiliar = Lista;
        while(auxiliar->siguiente!=NULL)
        {
            auxiliar = auxiliar->siguiente;
        } 
        auxiliar->siguiente = nuevoContacto;
    }
    return Lista;
}
Contacto *MostrarContacto(Contacto *Lista)
{
    if(Lista == NULL) printf("NULL\n");
       while(Lista != NULL)
  { 
    printf("%s\n", Lista->nombre);
    Lista = Lista->siguiente; 
  }
  if(Lista == NULL) printf("Fin de la lista\n");
}
Contacto *EliminarUltimoContacto(Contacto *Lista)
{
    contacto->siguiente = NULL;
    free(contacto);
}

int main()
{
    Contacto *Lista = ListaContacto(Lista);
    Lista = AgregarContacto(Lista, "Profe Norman");
    Lista = AgregarContacto(Lista, "Profe Mosso master");
    Lista = AgregarContacto(Lista, "Luisillo el Profe");
    Lista = AgregarContacto(Lista, "Profe EncarnaDios");
    MostrarContacto(Lista);
    EliminarUltimoContacto(Lista);
    MostrarContacto(Lista);

    return 0;
}


