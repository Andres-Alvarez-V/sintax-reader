#pragma once

#include <bits/stdc++.h>
#include "arbol.h"
#include "operador.h"
using namespace std;

class Binario :public Arbol
{
private:
    Operador oper;
    Arbol izq;
    Arbol der;
public:
    virtual void abstract();
    Binario(Operador oper, Arbol izq, Arbol der);
    Operador getOper();
    Arbol getIzq();
    Arbol getDer();
};
