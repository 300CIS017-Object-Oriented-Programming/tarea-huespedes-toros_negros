#include "Persona.h"
using namespace std;

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
    cout<<"- Identificacion: "<< id <<endl;
    cout<<"- Nombre: "<< name <<endl;
    cout<<"- Nacimiento: "<< nacimiento <<endl;
    cout<<"- Puntaje: "<< points <<endl;
}

long Persona::getId() const{
    return id;
}

const string &Persona::getName() const {
    return name;
}

const string &Persona::getSex() const {
    return sex;
}

const string &Persona::getNacimiento()const {
    return nacimiento;
}

void Persona::setId(const long id2){
    id = id2;
}

void Persona::setName(const string &name2){
    name = name2;
}

void Persona::setSex(const string &sex2){
    sex = sex2;
}

void Persona::setNacimiento(const string &nacimiento2){
    nacimiento = nacimiento2;
}

