//
// Created by orduz on 15/09/2022.
//

#include "Huesped.h"

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

    cout<<"información clinica: "<<infoClinica<<endl;
    cout<<"ciudad de la familia: "<<ciudadFamiliar<<endl;
}

string &Huesped::getInfoClinica() const {
    return infoClinica;
}

string &Huesped::getCiudadFamiliar() const {
    return ciudadFamiliar;
}

void Huesped::setInfoClinica(const string info) {

    infoClinica = info;
}

void Huesped::setCiudadFamiliar(const string ciudad) {

    ciudadFamiliar = ciudad;
}

