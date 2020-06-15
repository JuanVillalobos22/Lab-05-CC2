#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;
class Node{
private:
    int dato;
    Node * next;
public:
    Node();
    Node(int);
    Node(Node &);
    ~Node();
    int getdato();
    void setdato(int);
    Node *getnext();
    void setnext(Node *);
};
Node::Node(){
    this->dato=0;
    next=NULL;
}
Node::Node(int dato){
    this->dato=dato;
    next=NULL;
}
Node::Node(Node &node){
    this->dato=node.dato;
    this->next=node.next;
}
Node::~Node(){
}
int Node::getdato(){
    return dato;
}
void Node::setdato(int dato){
    this->dato=dato;
}
Node *Node::getnext(){
    return this->next;
}
void Node::setnext(Node *next){
    this->next=next;
}
#endif
