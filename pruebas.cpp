#include <bits/stdc++.h>
#include "arbol.h"
#include "pruebas.h"
#include "binario.h"
#include "operador.h"
#include "numero.h"
#include "analizador.h"

using namespace std;

enum operadores { SUM = '+', RES = '-', MULT = '*', DIV = '/'};
void Pruebas::expresion01(){

    Arbol expresion[] = {
        Binario(Operador(SUM),
                Numero(4),
                Numero(5)
        )
    };

    Analizador calculadora = Analizador();

    cout << calculadora.imprimirTodo(&expresion[0]) << endl;
}