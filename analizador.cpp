#include <bits/stdc++.h>
#include "arbol.h"
#include "numero.h"
#include "binario.h"
#include "analizador.h"
using namespace std;

int Analizador::evaluar(Arbol *raiz)
{
  int res = 0;

  if (raiz==nullptr)
  {
    return res;
  }
  else
  {
    if (raiz->viewClassType() == "Numero")
    {
      Numero *n = (Numero *)raiz;
      res = n->getValor();
      
    }
    else
    {
      Binario *operador = (Binario *)raiz;
      switch(operador->getOper()->getOper()){
        case '+':
          res = evaluar(operador->getIzq()) + evaluar(operador->getDer());
          break;
        case '-':
          res = evaluar(operador->getIzq()) - evaluar(operador->getDer());
          break;
        case '*':
          res = evaluar(operador->getIzq()) * evaluar(operador->getDer());
          break;
        case '/':
          res = evaluar(operador->getIzq()) / evaluar(operador->getDer());
          break;
      }
    }
  }
  return res;
} //fin del metodo

//============================================


string Analizador::imprimir(Arbol *raiz){

    string ecuacion = "";

    if(raiz == nullptr){
        return ecuacion;
    }else{
        if(raiz->viewClassType() == "Numero"){
            Numero *n = (Numero *)raiz;
            ecuacion = to_string(n->getValor());
            
        }else{
            Binario *operador = (Binario *)raiz;
            Operador *oper = operador->getOper();
            ecuacion.append("(")
                    .append(imprimir(operador->getIzq()));
            ecuacion += (oper->getOper());
            ecuacion.append(imprimir(operador->getDer()))
                    .append(")");
        }
    }
    return ecuacion;
}

string Analizador::imprimirTodo(Arbol *exp)
{
  string res = imprimir(exp);
  res += "=";
  res.append(to_string(evaluar(exp)));
  return res;
}