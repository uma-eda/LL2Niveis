//
// Created by Filipe Quintal on 04/05/2020.
//

#ifndef LL2NIVEIS_PONTO_H
#define LL2NIVEIS_PONTO_H


struct nodo {
    int dados;
    nodo* seguinte;
};

nodo * criaNo(int valor);
void imprimeSimples(nodo * inicio);
nodo *  insereInicio(nodo * inicio, int valor);


#endif //LL2NIVEIS_PONTO_H
