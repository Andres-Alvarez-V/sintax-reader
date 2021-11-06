#pragma once

#include <bits/stdc++.h>
#include "arbol.h"
#include "operador.h"
using namespace std;

//Se importo la clase operador.h y se quito el apuntador del getValor()

class Arbol{
  private:
  public:
    string classType;
    string viewClassType();
    void setClassType(string classType);
};

