#include<iostream>
#include "lista_enlazada.h"
using namespace std;

int main(){
    LinkedList lista(1);
    lista.insertar(3);
    lista.mostrar();
    lista.insertar(2);
    lista.mostrar();
    lista.insertar(5);
    lista.mostrar();
    lista.eliminar(4);
    lista.mostrar();
    lista.eliminar(2);
    lista.mostrar();
    lista.eliminar(1);
    lista.mostrar();
    return 0;
}
