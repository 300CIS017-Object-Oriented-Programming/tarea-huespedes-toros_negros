#include "Reserva.h"
using std::cout;
using std::cin;
using std::endl;


Reserva::Reserva() {
    fechaInicio = "";
    fechaFin = "";
    propietario = nullptr;
    huesped = nullptr;
}

Reserva::Reserva(string fechaInicio2, string fechaFin2, Propietario *propietario2, Huesped *huesped2) {
    fechaInicio = fechaInicio2;
    fechaFin = fechaFin2;
    *propietario = *propietario2;
    *huesped = *huesped2;
}

void Reserva::mostrarReservas(){
    cout<<"Fecha inicio: "<<fechaInicio<<endl;
    cout<<"Fecha fin: "<<fechaFin<<endl;
}


//GETS
const string &Reserva::getFechaInicio() const {
    return fechaInicio;
}
const string &Reserva::getFechaFin() const {
    return fechaFin;
}

//SETS
void Reserva::setFechaInicio(const string &fechaInicio2){
    fechaInicio = fechaInicio2;
}
void Reserva::setFechaFin(const string &fechaFin2){
    fechaFin = fechaFin2;
}



void Reserva::setPropietario(Propietario *propietario2){
    propietario = propietario2;
}
void Reserva::setHuesped(Huesped *huesped2){
    huesped = huesped2;
}
