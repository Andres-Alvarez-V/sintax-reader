#pragma once

#include <bits/stdc++.h>
#include "arbol.h"
#include "numero.h"
#include "operador.h"
#include "binario.h"
using namespace std;

class Analizador
{
private:

public:
    int* evaluar(Arbol* raiz);
    stringbuf imprimir();
    string imprimirTodo();
};