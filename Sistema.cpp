//
// Created by orduz on 15/09/2022.
//

#include "Sistema.h"
#include <iostream>
#include <cstdio>

void Sistema::agregarPropietario() {

    long id;
    string name;
    string sex;
    string nacimiento;
    int points = 0, pregunta;
    new Hogar *hogar;
    bool disponibilidad;

    cout<<"ingrese el id:"<<endl;
    cin>>id;

    cout<<"ingrese el nombre:"<<endl;
    cin.ignore();
    getline(cin, name);

    cout<<"ingrese el sexo:"<<endl;
    getline(cin, sexo);

    cout<<"ingrese la fecha de nacimiento:"<<endl;
    getline(cin, nacimiento);

    Propietario::Persona(id, name,sex, nacimiento, points);

    cout<<"tiene disponibilidad ?-> 1. para si, 2.para no";
    cin>>pregunta;

    if(pregunta){

        Propietario(hogar, true);
    }

    else{

        Propietario(hogar, false);
    }
}