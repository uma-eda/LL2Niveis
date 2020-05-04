//
// Created by Filipe Quintal on 04/05/2020.
//

#include <iostream>
#include "nodo.h"
using namespace std;
nodo * criaNo(int valor){
    nodo * novo = new nodo;
    novo->dados = valor;
    return novo;
}
void imprimeSimples(nodo * inicio){
    nodo * temp = inicio;

    while(temp !=0){
        cout << temp->dados << "->";
        temp = temp->seguinte;
    }
    cout << "NULL";
}
nodo * insereInicio(nodo * inicio, int valor){

    nodo * novo = criaNo(valor);
    novo->seguinte = inicio;
    inicio =  novo;

    return inicio;

}
