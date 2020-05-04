#include <iostream>
#include "nodo.h"
#include "nodo2nivel.h"
using namespace std;
int main() {

    //primeiro vamos inserir alguns valores na lista ligada definida por nodo.
    //"Normalmente"

    nodo * ll1 = NULL;
    ll1 = insereInicio(ll1,1);
    ll1 = insereInicio(ll1,2);
    ll1 = insereInicio(ll1,3);
    ll1 = insereInicio(ll1,4);
    ll1 = insereInicio(ll1,5);

    imprimeSimples(ll1);
    cout << endl <<" ----------"<<endl;
    //Agora inserir alguns valores na segunda Lista ligada, apenas considerando os nodo2nivel, sem inserir dados nas listas de nodo
    //associadas

    nodo2nivel * ll2 = NULL;
    ll2 = insereInicio2Nivel(ll2, 'A');
    ll2 = insereInicio2Nivel(ll2, 'B');
    ll2 = insereInicio2Nivel(ll2, 'C');
    ll2 = insereInicio2Nivel(ll2, 'D');
    ll2 = insereInicio2Nivel(ll2, 'E');

    imprimeSimples(ll2);

    cout << endl <<" ----------"<<endl;

    imprimeComplexo(ll2); // na primeira impressão ainda não temos nada nas listas interiores, logo a apresentação será igual a de cima

    cout << endl <<" ----------"<<endl;

    //vamos inserir algumas coisas
    ll2->primeiro = insereInicio(ll2->primeiro,1);
    ll2->primeiro = insereInicio(ll2->primeiro,2);
    ll2->primeiro = insereInicio(ll2->primeiro,3);
    imprimeComplexo(ll2);

    cout << endl <<" ----------"<<endl;
    //como estamos a trabalhar com listas ligadas podemos fazer algo como

    ll2->seguinte->seguinte->primeiro = ll1; // na prática estamos a dizer que ll1 (criada acima será a lista associada ao 3º elemento de ll2)
    imprimeComplexo(ll2);
    return 0;
}
