//
// Created by Filipe Quintal on 04/05/2020.
//
#include <iostream>
#include "nodo2nivel.h"
using namespace std;

nodo2nivel * criaNo2(char valor){
    nodo2nivel * novo = new nodo2nivel;
    novo->dados = valor;
    return novo;
}
void imprimeSimples(nodo2nivel * inicio){
    nodo2nivel * temp = inicio;

    while(temp !=0){
        cout << temp->dados << "->";
        temp = temp->seguinte;
    }
    cout << "NULL";
}
nodo2nivel * insereInicio2Nivel(nodo2nivel * inicio, char valor){ //não necessáriamente tería que ser atribuido um nome diferente,
                                                                        // poderia ficar insereInicio como no nodo.h
    nodo2nivel * novo = criaNo2(valor);
    novo->seguinte = inicio;
    inicio =  novo;

    return inicio;

}
void imprimeComplexo(nodo2nivel * inicio){ //função usada para a lista principal e as listas associadas a esta
    nodo2nivel * temp = inicio;

    while(temp !=0){  // percorre a lista "de fora"
        cout << temp->dados << "";
        nodo * llinterna = temp->primeiro;
        while(llinterna!=0){    // percorre a lista interior
            cout <<" "<<llinterna->dados<<" -> ";
            llinterna = llinterna->seguinte;

        }
        cout << endl;
        temp = temp->seguinte;
    }
    cout << "NULL";
}
