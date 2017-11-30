#ifndef LISTA_NODO_H
#define LISTA_NODO_H

template <class T>
class Nodo{
private:
  T dato;
  Nodo *next;
  
public:
  Nodo(){
    next = NULL;
  }
  
  Nodo(T d, Nodo* n){
    dato = d;
    next = n;
  }
  
  void setDato(T d){
    dato = d;
  }
  
  T getDato(){
    return dato;
  }
  
  T setNext(Nodo *n){
    next = n;
  }
  
  Nodo *getNext(){
    return next;
  }
  
};

#endif