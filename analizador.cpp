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


int Analizador::evaluar(Arbol* raiz){
    int res = 0;
    
    if(raiz == nullptr){
        return res;
    }
    else{

        if(instanceof<Numero>(raiz)){
            Numero *n = dynamic_cast<Numero*>(raiz);
            res = n->getValor();
        }else{

            Binario *binario = dynamic_cast<Binario*>(raiz);
            Operador *oper = binario->getOper();
            string valor = oper->getOper();
            
            if(valor == "+"){

                res = evaluar(binario->getIzq()) + evaluar(binario->getIzq());

            }else if(valor == "-"){
                
                res = evaluar(binario->getIzq()) - evaluar(binario->getIzq());

            }else if(valor == "*"){
                
                res = evaluar(binario->getIzq()) * evaluar(binario->getIzq());

            }else if(valor == "/"){
                
                res = evaluar(binario->getIzq()) / evaluar(binario->getIzq());

            }
        }
    }

    return res;
}

string Analizador::imprimir(Arbol *raiz){

    string ecuacion = "";

    if(raiz == nullptr){
        return ecuacion;
    }else{
        if(instanceof<Numero>(raiz)){
            Numero *n = dynamic_cast<Numero*>(raiz);
            ecuacion.append(to_string(n->getValor()));
            // int res = n->getValor();
        }else{
            Binario *binario = dynamic_cast<Binario*>(raiz);
            Operador *oper = binario->getOper();
            ecuacion.append("(")
                    .append(imprimir(binario->getIzq()))
                    .append(binario->getOper()->getOper())
                    .append(imprimir(binario->getDer()))
                    .append(")");
        }
    }

    return ecuacion;

}


string Analizador::imprimirTodo(Arbol *exp){
    return imprimir(exp) + " = " +  to_string(evaluar(exp));
}