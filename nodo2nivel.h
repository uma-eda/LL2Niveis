//
// Created by Filipe Quintal on 04/05/2020.
//

#ifndef LL2NIVEIS_NODO2NIVEL_H
#define LL2NIVEIS_NODO2NIVEL_H

#include "nodo.h"

struct nodo2nivel {
    char dados;             //Coloquei aqui char só para ficar diferenciar da lista anterior
    nodo2nivel * seguinte;
    nodo* primeiro;
};

nodo2nivel * criaNo2(char valor);
void imprimeSimples(nodo2nivel * inicio);
nodo2nivel *  insereInicio2Nivel(nodo2nivel * inicio, char valor);
void imprimeComplexo(nodo2nivel * inicio); // esta função terá que percorrer lista superior e a interior

#endif //LL2NIVEIS_NODO2NIVEL_H
