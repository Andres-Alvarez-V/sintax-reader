#include <bits/stdc++.h>
#include "arbol.h"
#include "numero.h"
using namespace std;

Numero::Numero(int valor){
    this->valor=valor;
    setClassType("Numero");
}

int Numero::getValor(){
    return this->valor;
}