//
// Created by Carol on 9/6/2024.
//

#ifndef EJERCICIO1_LISTASIMPLE_H
#define EJERCICIO1_LISTASIMPLE_H

typedef struct nodo{
    int numero;
    struct nodo * sig;
}Nodo;

typedef struct lista{
    Nodo * cabecera;
}Lista;

Lista * newLista();

Nodo * newNodo (int numero);

Lista * funcionResta (Lista * lista1, Lista * lista2);

void insertar(Lista * lista, Nodo * nodo);


#endif //EJERCICIO1_LISTASIMPLE_H
