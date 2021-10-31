#include <bits/stdc++.h>
#include "arbol.h"
#include "numero.h"
#include "binario.h"
#include "analizador.h"
using namespace std;


int* Analizador::evaluar(Arbol* raiz){
    int res = 0;
    int* resPointer = &res;
    if(raiz == nullptr){
        return resPointer;
    }
    else{
        if(raiz->getValor() != NULL){
            Numero n = raiz->getValor();
            resPointer = n.getValor();
        }
        else{
            Binario operador = raiz->getOper();//ERROR!
        }
    }
}