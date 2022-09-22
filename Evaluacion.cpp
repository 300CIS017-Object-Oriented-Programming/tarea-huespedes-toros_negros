#include "Evaluacion.h"
using std::cout;
using std::cin;
using std::endl;

Evaluacion::Evaluacion(){
    calificacion = 0;
    comentariosEvaluacion = "";
    fechaEvaluacion = "";
    propietario = nullptr;
    huesped = nullptr;
}

Evaluacion::Evaluacion(int calificacion2, string comentariosEvaluacion2, string fechaEvaluacion2){
    calificacion = calificacion2;
    comentariosEvaluacion = comentariosEvaluacion2;
    fechaEvaluacion = fechaEvaluacion2;
}

void Evaluacion::mostrarEvaluaciones(){
    cout<<"- Calificacion: "<<calificacion<<endl;
    cout<<"- Comentarios: "<<comentariosEvaluacion<<endl;
    cout<<"- Fecha de evaluacion: "<<fechaEvaluacion<<endl;
}

//GETS
int Evaluacion::getCalificacion() const{
    return calificacion;
}

const string &Evaluacion::getComentariosEvaluacion() const{
    return comentariosEvaluacion;
}

const string &Evaluacion::getFechaEvaluacion() const{
    return fechaEvaluacion;
}


//SETS
int Evaluacion::setCalificacion(int calificacion2){
    calificacion = calificacion2;
}
void Evaluacion::setComentariosEvaluacion(const string &comentariosEvaluacion2){
    comentariosEvaluacion = comentariosEvaluacion2;
}
void Evaluacion::setfechaEvaluacion(const string &fechaEvaluacion2){
    fechaEvaluacion = fechaEvaluacion2;
}