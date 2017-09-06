#ifndef CIRCLIST_H
#define CIRCLIST_H

#include "Nodo.h"

template<class T>
class CircList {
private:
    Nodo *puntero;

public:
    CircList();

    CircList(const Lista<T> &li);

    ~CirclList();

    bool esVacia();

    int getTamanio();

    void insertar(T dato);

    void remover();

    void avanzar();

    T getDato();

    void reemplazar(T dato);

    void vaciar();
};


/**
 * Constructor de la clase CircList
 * @tparam T
 */
template<class T>
CircList<T>::CircList() {
    puntero = NULL;
}


/**
 * Constructor por copia de la clase CircList
 * @tparam T
 * @param li
 */
template<class T>
CircList<T>::CircList(const Lista<T> &li) {}


/**
 * Destructor de la clase CircList, se encarga de liberar la memoria de todos los nodos
 * utilizados en la lista
 * @tparam T
 */
template<class T>
CircList<T>::~CircList() {}


/**
 * Metodo para saber si la lista esta vacia
 * @tparam T
 * @return true si la lista esta vacia, sino false
 */
template<class T>
bool CircList<T>::esVacia() {

    return puntero == NULL;

}


/**
 * Metodo para obtener la cantidad de nodos de la lista
 * @return la cantidad de nodos de la lista
 */
template<class T>
int CircList<T>::getTamanio() {

    Nodo *aux = puntero;
    int tamanio = 1;

    if (NULL == puntero)
        return 0;

    while (aux->getNext() != puntero){
        tamanio++;
        aux = aux->getNext();
    }
    return tamanio;
}


/**
 * Inserta un nodo con el dato en la posicion pos
 * @tparam T
 * @param pos lugar donde será insertado el dato
 * @param dato  dato a insertar
 */
template<class T>
void CircList<T>::insertar(T dato) {

    if(NULL == puntero){
        puntero = new Nodo(dato);
        puntero->setNext(puntero);
        return;
    }

    Nodo* tmp = new Nodo(dato, puntero->getNext());
    puntero->setNext(tmp);
    puntero = puntero->getNext();
}



/**
 * Elimina el nodo de la lista enlasada
 * @tparam T
 */
template<class T>
void CircList<T>::remover() {

    Nodo *aux = puntero;

    if (NULL == puntero)
        return;;

    while (aux->getNext() != puntero){
        aux = aux->getNext();
    }

    if (aux == puntero){
        delete puntero;
        puntero = NULL;
        return;
    }

    aux->setNext(puntero->getNext());
    delete puntero;
    puntero = aux->getNext();
}

void CircList::avanzar() {

    if(puntero != NULL)
        puntero = puntero->getNext();

}


/**
 * Obtener el dato del nodo
 * @return dato almacenado en el nodo
 */
template<class T>
T CircList<T>::getDato() {

    if(NULL == puntero)
        throw 1;

    return puntero->getDato();

}


/**
 * Reemplaza el dato almacenado en un nodo por este otro
 * @param dato nuevo dato a almacenar
 */
template<class T>
void CircList<T>::reemplazar(T dato) {

    if(NULL == puntero)
        throw 1;

    puntero->setDato(dato);

}


/**
 * Función que vacia la lista enlazada
 */
template<class T>
void CircList<T>::vaciar() {

    while(!esVacia())
        remover();

}


};

#endif //CIRCLIST_H