#include <bits/stdc++.h>
#include "arbol.h"
#include "numero.h"
#include "binario.h"
#include "analizador.h"
using namespace std;


//https://www.tutorialspoint.com/cplusplus-equivalent-of-instanceof
template<typename Base, typename T>
inline bool instanceof(const T*) {
    return is_base_of<Base, T>::value;
}


int Analizador::evaluar(Arbol *raiz)
{
  int res = 0;

  if (raiz==NULL)
  {
    return res;
  }
  else
  {
    if (raiz->viewType() == "Numero")
    {
      Numero *n = (Numero *)raiz;
      res = n->getValor();
      
    }
    else
    {
      Binario *operador = (Binario *)raiz;
      switch(operador->getOper()->toString()){
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
string Analizador ::imprimir(Arbol *raiz)
{
  string ecuacion;
  if (raiz == NULL)
  {
    //return "Sin ecuación";
  }
  else
  {
    if (raiz->viewType() == "Numero")
    {
      Numero *n = (Numero *)raiz;
      ecuacion = to_string(n->getValor());
    }
    else
    {
      Binario *operador = (Binario *)raiz;
      ecuacion = ecuacion + "(";
      ecuacion.append(imprimir(operador->getIzq()));
      ecuacion += operador->getOper()->toString();
      ecuacion += imprimir(operador->getDer());
      ecuacion.append(")");
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