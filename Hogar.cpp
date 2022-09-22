#include "Hogar.h"
using std::cout;
using std::cin;
using std::endl;


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
    cout<<"- Direccion Hogar: "<<direccionHogar<<endl;
    cout<<"- Numero Camas Disponibles: "<< numeroCamasDisponibles <<endl;

    if(alojarBebes){
        cout<<"- Se puede alojar bebes?: yes"<<endl;
    }
    else{
        cout<<"- Se puede alojar bebes?: No"<<endl;
    }
    cout<<"- Descripcion Hogar: "<< descripcionHogar <<endl;
}


//GETS
const string &Hogar::getDireccion() const {
    return direccionHogar;
}

int Hogar::getNumeroCamas() const {
    return numeroCamasDisponibles;
}

bool Hogar::getAlojaBebes() const{
    return alojarBebes;
}

const string &Hogar::getDescripcion() const {
    return descripcionHogar;
}

//SETS
void Hogar::setDireccion(string &direccion){
    direccionHogar = direccion;
}

void Hogar::setNumeroCamas(int numeroCamas){
    numeroCamasDisponibles = numeroCamas;
}

void Hogar::setAlojaBebes(bool alojaBebes2){
    alojarBebes = alojaBebes2;
}

void Hogar::setDescripcion(string &descripcion){
    descripcionHogar = descripcion;
}