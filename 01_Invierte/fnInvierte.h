#include "../Lista/Lista.h"
#ifndef FNINVIERTE_H
#define FNINVIERTE_H


template <class T>
void fnInvierte (Lista<T> *lis);


template <class T>
void fnInvierte (Lista<T> *lis){

    int t;
    T tmp1, tmp2;


    if(!lis->esVacia()){
        t = lis->getTamanio();
        for(int i = 0; i <= t/2; i++){
            tmp1 = lis->getDato(i);
            tmp2 = lis->getDato(t-i);
            lis->reemplazar(i, tmp2);
            lis->reemplazar(t-i, tmp1);
        }
    }

}


#endif //FNINVIERTE_H
