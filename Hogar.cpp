//
// Created by orduz on 15/09/2022.
//
#include "Hogar.h"

Hogar::Hogar(){

    direccionHogar = "";
    numeroCamasDisponibles = 0;
    alojarBebes = false;
    descripcionHogar = "";
}

Hogar::Hogar(string direccion, int numeroCamas, bool alojaBebes2, string descripcion){

    direccionHogar = direccion;
    numeroCamasDisponibles = numeroCamas;
    alojarBebes = alojaBebes2;
    descripcionHogar = descripcion;

}

void Hogar::mostrarHogar(){

    cout<<"Direccion Hogar: "<< direccion <<endl;
    cout<<"Numero Camas Disponibles: "<< numeroCamasDisponibles <<endl;

    if(alojarBebes){

        cout<<"Se puede alojar bebes?: yes"<<endl;

    }

    else{

        cout<<"Se puede alojar bebes?: No"<<endl;
    }

    cout<<"Descripcion Hogar: "<< descripcionHogar <<endl;

}

const string &Hogar::getDireccion() const {
    return direccionHogar;
}

int Hogar::getNumeroCamas() const {
    return numeroCamasDisponibles;
}

bool Hogar::getAlojaBebes() const; {

    return alojarBebes;
}

string &Hogar::getDescripcion() const {

    return descripcionHogar;
}

void setDireccion(string direccion){

    direccionHogar = direccionHogar;
}

Hogar::void setNumeroCamas(int numeroCamas){

    numeroCamasDisponibles = numeroCamas;
}

Hogar::void setAlojaBebes(bool alojarBebes){

    alojarBebes = alojarBebes;
}
Hogar::void setDescripcion(string descripcion){

    descripcionHogar = descripcion;
}