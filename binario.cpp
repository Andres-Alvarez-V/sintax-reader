#include <bits/stdc++.h>
#include "arbol.h"
#include "operador.h"
#include "binario.h"
using namespace std;

Binario::Binario(Operador oper, Arbol *izq, Arbol *der){
    this->oper= new Operador(oper);
    this->izq= izq;
    this->der= der;
    setType("Binario");
}

Operador* Binario::getOper(){
    return oper;
}

Arbol* Binario::getIzq(){
    return izq;
}

Arbol* Binario::getDer(){
    return der;
}

