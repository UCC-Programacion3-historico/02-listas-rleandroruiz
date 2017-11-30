#include <iostream>
#include "../Lista/Lista.h"

int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;
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
    do{
        std::cout<<"Ingrese 1 si desea eliminar un número, cualquier otra opción para salir"<<std::endl;
        std::cin>>t;
        if(t == 1){
            std::cout<<"Ingrese la posición del número a eliminar"<<std::endl;
            lis.remover(x);
        }
    }while(t == 1);
    return 0;
}