#include <bits/stdc++.h>
#include "arbol.h"
#include "pruebas.h"
#include "binario.h"
#include "operador.h"
#include "numero.h"
#include "analizador.h"

using namespace std;

//enum operadores { SUM = '+', RES = '-', MULT = '*', DIV = '/'};

void Pruebas::expresion01(){

    Arbol *expresion[] = {
      new Binario('*',
                  new Binario('+', new Numero(4), new Numero(4)),
                  new Numero(5))};

  Analizador *calculadora = new Analizador();

  cout << calculadora->imprimirTodo(expresion[0]) << endl;;
}