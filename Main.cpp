#include<cstdio>
#include<iostream>
#include"Sistema.h"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {

    Sistema sistema;

    int opc;
    do {
        cout << "************ Alojamiento Huespedes ************" << endl;
        cout << "1. Agregar persona." << endl;
        cout << "2. Crear reserva." << endl;
        cout << "3. Liberar reserva." << endl;
        cout << "4. Agregar evaluacion." << endl;
        cout << "-1. Salir." << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc)
        {
            case 1:

                sistema.agregarPersona();

                break;
            case 2:

                sistema.crearReservas();

                break;
            case 3:

                break;
            default:

                sistema.agregarEvaluaciones();
                break;
        }
    }while(opc != -1);
    return 0;
}