#include "Huesped.h"
using std::cin;
using std::cout;
using std::string;
using std::endl;

Huesped::Huesped() {
    infoClinica = "";
    ciudadFamiliar = "";
}

Huesped::Huesped(string info, string ciudad) {
    infoClinica = info;
    ciudadFamiliar = ciudad;
}

void Huesped::mostrarHuesped() {
    mostrarPersona();
    cout<<"- Información clinica: "<<infoClinica<<endl;
    cout<<"- Ciudad de la familia: "<<ciudadFamiliar<<endl;
}

const string &Huesped::getInfoClinica() const {
    return infoClinica;
}

const string &Huesped::getCiudadFamiliar() const {
    return ciudadFamiliar;
}

void Huesped::setInfoClinica(const string &info){
    infoClinica = info;
}

void Huesped::setCiudadFamiliar(const string &ciudad) {
    ciudadFamiliar = ciudad;
}

