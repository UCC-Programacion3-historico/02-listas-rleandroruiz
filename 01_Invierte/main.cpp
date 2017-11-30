#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

int main() {
    std::cout << "Ejercicio 02/01\n" << std::endl;
    Lista<int> l;

    for (int i = 0; i < 50; i++)
        l.insertarUltimo(i);

    fnInvierte(&l);

    for (int i = 0; i < 50; i++) {
        std::cout<<l.getDato(i);
    }

    return 0;
}