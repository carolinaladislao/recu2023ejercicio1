//
// Created by Carol on 9/6/2024.
//

#include "listaSimple.h"
#include <stdio.h>
#include <stdlib.h>

Lista * funcionResta(Lista *lista1, Lista *lista2) {
    //l2-l1 ambas ordeandas

    Nodo * aux1 = lista1->cabecera;
    Nodo * aux2 = lista2->cabecera;

    Lista * nuevaLista = newLista();

    while (aux1 != NULL && aux2 != NULL){
        if(aux1->numero == aux2->numero){
            aux2 = aux2->sig; //por si hay repetidos, no avanzo el aux1 al siguiente
        }else{
            if(aux2->numero < aux1->numero){
                insertar(nuevaLista, newNodo(aux2->numero));
                aux2= aux2->sig;
            }
            else{
                aux1=aux1->sig;
            }
        }
    }

    if(aux2 != NULL){
        if(nuevaLista->cabecera != NULL){
            Nodo * aux = nuevaLista->cabecera;
            for(;aux->sig != NULL; aux = aux->sig){}

            aux->sig = aux2;
        }else{
            nuevaLista->cabecera = aux2;
        }

    }
    return nuevaLista;
}

Lista *newLista() {

    Lista * aux = malloc(sizeof(Lista));

    if(aux == NULL){
        printf("No hay espacio");
        exit(-1);
    }

    aux->cabecera = NULL;

    return aux;
}

Nodo *newNodo(int numero) {
    Nodo * aux = malloc(sizeof(Nodo));

    if(aux == NULL){
        printf("No hay espacio");
        exit(-1);
    }

    aux->numero = numero;
    aux->sig = NULL;

    return aux;
}

void insertar(Lista *lista, Nodo *nodo) {

    if(lista->cabecera == NULL){
        lista->cabecera = nodo;
    }else{
        Nodo * aux = lista->cabecera;
        for(; aux->sig != NULL; aux = aux->sig){}

        aux->sig = nodo;
    }
}
