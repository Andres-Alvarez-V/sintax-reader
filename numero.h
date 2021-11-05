#pragma once

#include <bits/stdc++.h>
#include "arbol.h"
using namespace std;

class Numero : public Arbol
{
private:
    int valor;
public:
    Numero(int valor);
    int getValor();
};