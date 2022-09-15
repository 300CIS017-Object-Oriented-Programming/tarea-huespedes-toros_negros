#include <iostream>
#include "Sistema.h"

using std::cin;
using std::cout;
using std::string;


void mostrarMenuPropietario(Sistema &sistema) {

    int opcPropietarios = 0;
    cout << "Menu de propietarios ... \n";
    cout << "1. Mostrar propietarios \n";
    cout << "-1. Volver\n";

    cin >> opcPropietarios;
    switch (opcPropietarios) {
        case 1:
            //TODO
            break;

        default:
            break;
    }

}

void mostrarMenuHuesped(Sistema& sistemita) {
    int opc = 0;
    cout << "1. Realizar Evaluacion \n";
    cout << "-1. Volver\n";
    cin >> opc;

    switch (opc) {
        case 1:
            //TODO
            break;

        default:
            break;
    }
}

void menu(Sistema& sistemita2) {
    int opc = 0;
    do {
        cout << "\n ****Bienvenidos ****\n";
        cout << "1. Mostrar menu Propietarios \n";
        cout << "2. Mostrar menu Huespedes \n";
        cout << "-1. Salir \n";

        cin >> opc;

        switch (opc) {
            case 1:
                mostrarMenuPropietario(sistemita2);
                break;
            case 2:
                mostrarMenuHuesped(sistemita2);
                break;
            default:
                break;
        }
    } while (opc != -1);
}

int main() {

    Sistema sistema;
    menu(sistema);
    return 0;
}
