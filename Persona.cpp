//
// Created by orduz on 15/09/2022.
//
#include "Persona.h"

Persona::Persona() {

    id = 0;
    name = "";
    sex = "";
    nacimiento = "";
    points = 0;
}

Persona::Persona(long id2, string name2, string sex2, string nacimiento2, int points2) {

    id = id2;
    name = name2;
    sex = sex2;
    nacimiento = nacimiento2;
    points = points2;

}

void Persona::mostrarPersona() {

    cout<<"identificación: "<< id2 <<endl;
    cout<<"nombre: "<< name <<endl;
    cout<<"nacimiento: "<< nacimieto <<endl;
    cout<<"puntaje: "<< points <<endl;

}

long getId(){

    return id;
}

string &getName(){

    return name;
}

string &getSex(){

    return sex:
}

string &getNacimiento() {

    return nacimiento;
}

void setId(const long id){


    id = id;
}
void setName(const string name){

    name = name;
}
void setSex(const string sex){

    sex = sex;
}
void setNacimiento(const string nacimiento){

    nacimiento = nacimiento;
}
