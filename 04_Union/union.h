#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> *unir(Lista<T> &lisA, Lista<T> &lisB) {
    Lista <T> *NuevaLista = new Lista<T>;
    for(int i; i < lisA.getTamanio(); i++){
        NuevaLista->insertarPrimero(lisA.getDato(i));
    }
    for(int i; i < lisB.getTamanio(); i++){
        NuevaLista->insertarPrimero(lisB.getDato(i));
    }
    return NuevaLista;
}


#endif //UNION_H
