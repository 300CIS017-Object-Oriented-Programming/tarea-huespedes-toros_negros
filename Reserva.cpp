//
// Created by orduz on 15/09/2022.
//
#include "Reserva.h"

Reserva::Reserva() {
    fechaInicio = "";
    fechaFin = "";
    *propietario = nullptr;
    *huesped = nullptr;
}

Reserva::Reserva(string fechaInicio2, string fechaFin2, Propietario *propietario2, Huesped *huesped2) {
    fechaInicio = fechaInicio2;
    fechaFin = fechaFin2;
    *propietario = *propietario2;
    *huesped = huesped2;
}

// FIXME completar
void mostrarReservas(){
    cout<<"Fecha inicio: "<<fechaInicio<<endl;
    cout<<"Fecha fin: "<<fechaFin<<endl;
    //propietario->mostrarReservas();
    //huesped->mostrarReservas();
}

//GETS
string &Reserva::getFechaInicio() const {
    return fechaInicio;
}
string &Reserva::getFechaFin() const {
    return fechaFin;
}
//VERIFICAR SI ESTAN BIEN ESTOS VOID TIPO PUNTERO:
void Reserva::getPropietario(const Propietario *propietario2){
    return propietario2;
}
void Reserva::getHuesped(const Huesped *huesped2){
    return huesped2;
}

//SETS
void Reserva::setFechaInicio(const string fechaInicio2){
    fechaInicio = fechaInicio2;
}

void Reserva::setFechaFin(const string fechaFin2){
    fechaFin = fechaFin2;
}

void Reserva::setPropietario(const Propietario *propietario2) {
    propietario = propietario2;
}

void Reserva::setHuesped(const Huesped *huesped2) {
    huesped = huesped2;
}