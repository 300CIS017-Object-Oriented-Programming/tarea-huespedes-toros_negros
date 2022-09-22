#include "Sistema.h"
#include "Hogar.h"
#include "Evaluacion.h"

#include <iostream>
#include <cstdio>

using std::cout;
using std::cin;
using std::endl;

void Sistema::agregarPersona(){
    long id;
    string name;
    string sex;
    string nacimiento, infoClinica, ciudadFamilia, direccionHogar, descripcionHogar;
    int points = 0, pregunta, pregunta2, numeroCamasDisponibles;

    bool disponibilidad, alojarBebes;
    auto *persona = new Propietario();
    auto *persona2 = new Huesped();

    cout<<"Ingrese el id:"<<endl;
    cin>>id;

    cout<<"Ingrese el nombre:"<<endl;
    cin.ignore();
    getline(cin, name);

    cout<<"Ingrese el sexo:"<<endl;
    getline(cin, sex);

    cout<<"Ingrese la fecha de nacimiento:"<<endl;
    getline(cin, nacimiento);

    cout<<"es usted huesped ? -> 1.si, 2.no"<<endl;
    cin>>pregunta2;

    if(pregunta2 == 1){

        cin.ignore();
        cout<<"ingrese su informacion clinica"<<endl;
        getline(cin, infoClinica);

        cout<<"ingrese su ciudad familiar"<<endl;
        getline(cin, ciudadFamilia);

        persona2->setId(id);
        persona2->setName(name);
        persona2->setSex(sex);
        persona2->setNacimiento(nacimiento);
        persona2->setInfoClinica(infoClinica);
        persona2->setCiudadFamiliar(ciudadFamilia);

        huespedes[id] = persona2;
    }

    else{

        persona->setId(id);
        persona->setName(name);
        persona->setSex(sex);
        persona->setNacimiento(nacimiento);

        auto *hogar = new Hogar;

        cout<<"ingrese la direccion"<<endl;
        cin.ignore();

        getline(cin, direccionHogar);

        cout<<"ingrese la descripcion"<<endl;
        getline(cin, descripcionHogar);

        cout<<"ingrese numero de camas disponibles"<<endl;
        cin>>numeroCamasDisponibles;

        cout<<"aloja bebes ?? -> 1.si, 2,no"<<endl;
        cin>>alojarBebes;

        if(alojarBebes == 1){
            hogar->setAlojaBebes(true);
        }

        else{
            hogar->setAlojaBebes(false);
        }

        hogar->setDireccion(direccionHogar);
        hogar->setDescripcion(descripcionHogar);
        hogar->setNumeroCamas(numeroCamasDisponibles);

        cout<<"Tiene disponibilidad? -> 1.Para si, 2.Para no"<<endl;
        cin>>pregunta;

        if(pregunta == 1){
            persona->setDisponibilidadPropietario(true);
        }

        else{
            persona->setDisponibilidadPropietario(false);
        }

        persona->setHogar(hogar);

        personas[id] = persona;
    }
}

void Sistema::buscarPropietario(int id) {

    personas[id]->mostrarPropietarios();
}

void Sistema::buscarHuesped(int id) {

    huespedes[id]->mostrarHuesped();

}

void Sistema::buscarEvaluacion(string name){

    evaluaciones[name]->mostrarEvaluaciones();
}

void Sistema::agregarEvaluaciones(){

    int idPropietario, calificacion;
    auto *evaluacion = new Evaluacion();
    string idHuesped;

    string comentariosEvaluacion;
    string fechaEvaluacion;

    cout<<"ingrese el nombre: "<<endl;
    cin>>idHuesped;

    cout<<"ingrese la calificacion: "<<endl;
    cin>>calificacion;

    cin.ignore();
    cout<<"ingrese su comentario"<<endl;
    getline(cin, comentariosEvaluacion);

    cout<<"ingrese la fecha de evaluacion"<<endl;
    getline(cin, fechaEvaluacion);

    evaluacion->setCalificacion(calificacion);
    evaluacion->setComentariosEvaluacion(comentariosEvaluacion);
    evaluacion->setfechaEvaluacion(fechaEvaluacion);

    evaluaciones[idHuesped] = evaluacion;
}

void Sistema::crearReservas(){

    auto *reserva = new Reserva;

    int idHuesped, idPropietario;
    string fechaInicio, fechaFinal;

    cout<<"ingrese el id del Huesped"<<endl;
    cin>>idHuesped;

    cout<<"ingrese el id de propietario"<<endl;
    cin>>idPropietario;

    cout<<"ingrese la fecha de inicio"<<endl;
    cin.ignore();
    getline(cin, fechaInicio);

    cout<<"ingrese la fecha final"<<endl;
    getline(cin, fechaFinal);

    reserva->setFechaInicio(fechaInicio);
    reserva->setFechaFin(fechaFinal);

    personas[idPropietario]->setDisponibilidadPropietario(false);

    reservas.push_back(reserva);
}