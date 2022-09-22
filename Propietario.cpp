#include "Propietario.h"
using std::cout;
using std::cin;
using std::endl;


Propietario::Propietario() {
    hogar = nullptr;
    disponibilidadPropietario = false;
}

Propietario::Propietario(bool disponibilidad, Hogar *hogar2) {
    disponibilidadPropietario = disponibilidad;
    hogar = hogar2;
}

void Propietario::mostrarPropietarios(){
    mostrarPersona();
    if(disponibilidadPropietario){
        cout<<"Disponilibidad: Si"<<endl;
    }

    else{
        cout<<"Disponilibidad: No"<<endl;
    }
}

bool Propietario::getDisponibilidadPropietario() const{
    return disponibilidadPropietario;
}

void Propietario::setDisponibilidadPropietario(const bool  disponibilidad){
    disponibilidadPropietario = disponibilidad;
}

void Propietario::setHogar(Hogar *hogar2) {
    hogar = hogar2;
}

void Propietario::cambiarEstado() {

    if(disponibilidadPropietario){
        disponibilidadPropietario = false;
    }

    else{
        disponibilidadPropietario = true;
    }
}