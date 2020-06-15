#ifndef LISTA_ENLAZADA_H
#define LISTA_ENLAZADA_H
#include "node.h"
#include <iostream>
using namespace std;

class LinkedList{
private:
    int size;
    Node *lista;
public:
    LinkedList();
    LinkedList(int);
    ~LinkedList();
    void insertar(int);
    void mostrar();
    void eliminar(int);
};

LinkedList::LinkedList(){
    size=0;
    lista=NULL;
}
LinkedList::LinkedList(int numero){
    lista= new Node(numero);
    this->size=1;
}

LinkedList::~LinkedList()
{
}
void LinkedList::insertar(int numero){
    Node *nuevo_node=new Node;
    nuevo_node->setdato(numero);

    Node *aux1=lista;
    Node *aux2=NULL;

    while((aux1!=NULL)&&(aux1->getdato()<numero)){
        aux2=aux1;
        aux1=aux1->getnext();
    }
    if(aux1==lista){
        lista=nuevo_node;
    }
    else{
        aux2->setnext(nuevo_node);
    }
    nuevo_node->setnext(aux1);
    cout<<"\tnuevo elemento insertado a lista"<<endl;
    size++;
}
void LinkedList::mostrar(){
    Node *actual= new Node;
    actual=lista;
    while(actual!=NULL){
        cout<<"\t"<<actual->getdato()<<"->";
        actual=actual->getnext();
    }
    cout<<endl;
}
void LinkedList::eliminar(int dato){
    if(lista!=NULL){
        Node *aux_borrar=lista;
        Node *anterior= NULL;
        while((aux_borrar!=NULL) &&(aux_borrar->getdato()!=dato)){
            anterior=aux_borrar;
            aux_borrar=aux_borrar->getnext();
        }
        if(aux_borrar==NULL)
            cout<<"\tno se encontro elemento\n";
        else if(anterior==NULL){
            lista=lista->getnext();
            delete aux_borrar;
            cout<<"\tElemento eliminado\n";
            size--;
        }
        else{
            anterior->setnext(aux_borrar->getnext());
            delete aux_borrar;
            cout<<"\tElemento eliminado\n";
            size--;
        }
    }
    else
        cout<<"\tLa lista esta vacia\n";
}
#endif
