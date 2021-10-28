#pragma once

#include <bits/stdc++.h>
#include "arbol.h"
using namespace std;

class Operador :public Arbol
{
private:
    enum operador{
        SUMA = '+',
        RESTA = '-',
        MULT = '*',
        DIV = '/',
    };
public:
    virtual void abstract();
    char oper;
    Operador(char oper);
};
