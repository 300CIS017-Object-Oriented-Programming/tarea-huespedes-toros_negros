
#include "Propietario.h"

Propietario::Propietario() {
    *hogar = nullptr;
    disponibilidadPropietario = false;
}

Propietario::Propietario(bool disponibilidad, Hogar *hogar2) {
    disponibilidadPropietario = disponibilidad;
    *hogar = hogar2;
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

bool Propietario::getDisponibilidadPropietario(){
    return disponibilidadPropietario;
}

void Propietario::setDisponibilidadPropietario(const bool  disponibilidad){
    disponibilidadPropietario = disponibilidad;
}

void Propietario::setHogar(const Hogar *hogar2) {
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