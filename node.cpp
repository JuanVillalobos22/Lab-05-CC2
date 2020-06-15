#include<iostream>
#include "node.h"
using namespace std;

int main(){
    Node prueba(2),prueba2(5);
    Node prueba3;
    prueba.setnext(&prueba2);
    cout<<prueba.getdato()<<endl;
    cout<<prueba.getnext()<<endl;
    cout<<prueba2.getdato()<<endl;
    cout<<prueba2.getnext()<<endl;
    prueba3=prueba;
    cout<<prueba3.getdato()<<endl;
    cout<<prueba3.getnext()<<endl;
}
