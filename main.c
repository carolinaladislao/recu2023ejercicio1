#include <stdio.h>
#include "listaSimple.h"

int main() {
    Lista * lista1 = newLista();
    Lista * lista2 = newLista();

    insertar(lista1, newNodo(1));
    insertar(lista1, newNodo(3));
    insertar(lista1, newNodo(5));
    insertar(lista1, newNodo(5));
    insertar(lista1, newNodo(7));

    insertar(lista2, newNodo(1));
    insertar(lista2, newNodo(2));
    insertar(lista2, newNodo(3));
    insertar(lista2, newNodo(3));
    insertar(lista2, newNodo(4));
    insertar(lista2, newNodo(5));
    insertar(lista2, newNodo(6));


    Lista * nueva = funcionResta(lista1, lista2);

    return 0;
}
