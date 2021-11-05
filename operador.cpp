#include <bits/stdc++.h>
#include "arbol.h"
#include "operador.h"
using namespace std;

Operador::Operador(char oper){
    this->oper = oper;
}

char Operador::toString(){
    return oper;
}

// void Operador::SUMA(){
//     Operador('+');
// }

// void Operador::RESTA(){
//     Operador('-');
// }

// void Operador::DIV(){
//     Operador('/');
// }

// void Operador::MULT(){
//     Operador('*');
// }