#include "Sistema.h"
#include "Hogar.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;


void Sistema::agregarPropietario() {
    long id;
    string name;
    string sex;
    string nacimiento;
    int points = 0, pregunta;
    Hogar *hogar;
    bool disponibilidad;

    cout<<"Ingrese el id:"<<endl;
    cin>>id;

    cout<<"Ingrese el nombre:"<<endl;
    cin.ignore();
    getline(cin, name);

    cout<<"Ingrese el sexo:"<<endl;
    getline(cin, sex);

    cout<<"Ingrese la fecha de nacimiento:"<<endl;
    getline(cin, nacimiento);

    Propietario::Persona(id, name,sex, nacimiento, points);

    cout<<"Tiene disponibilidad? -> 1.Para si, 2.Para no";
    cin>>pregunta;

    if(pregunta){
        Propietario(true, hogar);
    }
    else{
        Propietario(false, hogar);
    }
}