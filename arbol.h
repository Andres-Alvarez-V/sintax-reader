#pragma once

#include <bits/stdc++.h>
#include "arbol.h"
#include "operador.h"
using namespace std;

//Se importo la clase operador.h y se quito el apuntador del getValor()

class Arbol
{
private:
public:
    virtual int getValor();
    virtual Operador* getOper();
};

