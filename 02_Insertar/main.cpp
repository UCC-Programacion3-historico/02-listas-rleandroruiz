#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;
    Lista<int> lis;
    int x, t;

    do {
        std::cout<<"Ingrese un número"<<std::endl;
        std::cin>>x;
        std::cout << "Dónde desea agregarlo?" << std::endl;
        std::cout << "1-Al Principio" << std::endl;
        std::cout << "2-Al final" << std::endl;
        std::cout << "3-En medio" << std::endl;
        std::cout << "0-Salir" << std::endl;
        std::cin >> t;
        switch (t) {
            case 1: {
                lis.insertarPrimero(x);
                break;
            }
            case 2: {
                lis.insertarUltimo(x);
                break;
            }
            case 3: {
                lis.insertar(lis.getTamanio() / 2, x);
                break;
            }
            default:
                break;
        }
    }while(t != 0);
    return 0;
}