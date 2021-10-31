#pragma once

#include <bits/stdc++.h>
#include "arbol.h"
using namespace std;

class Operador
{
private:
    char oper;
public:
    Operador(char oper);
    string getOper();
    void SUMA();
    void RESTA();
    void DIV();
    void MULT();
    
};
