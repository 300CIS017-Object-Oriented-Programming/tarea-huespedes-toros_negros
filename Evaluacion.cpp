#include "Evaluacion.h"

Evaluacion::Evaluacion(){
    calificacion = 0;
    comentariosEvaluacion = "";
    fechaEvaluacion = "";

    *propietario = nullptr;
    *huesped = nullptr;
}

Evaluacion::Evaluacion(int calificacion2, string comentarios2, string fecha2, Propietario *propietario2, Huesped *huesped2) {
    calificacion = calificacion2;
    comentariosEvaluacion = comentarios2;
    fechaEvaluacion = fecha2;

    *propietario = propietario2;
    *huesped = huesped2;
}


void mostrarEvaluaciones(){
    cout<<"Calificacion: "<<calificacion<<endl;
    cout<<"Comentarios: "<<comentariosEvaluacion<<endl;
    cout<<"Fecha de evaluacion: "<<fechaEvaluacion<<endl;
    Propietario.mostrarEvaluaciones();
    Huesped.mostrarEvaluaciones();
}


//GETS
int Evaluacion::getCalificacion() const{
    return calificacion;
}

string &Evaluacion::getComentariosEvaluacion() const {
    return comentariosEvaluacion;
}
string &Evaluacion::getFechaEvaluacion() const {
    return fechaEvaluacion;
}

void Evaluacion::getPropietario(const Propietario *propietario2){
    return propietario2;
}
void Evaluacion::getHuesped(const Huesped *huesped2){
    return huesped2;
}


//SETS
int Evaluacion::setCalificacion(const int calificacion2) {
    calificacion = calificacion2;
}

Evaluacion::void setComentariosEvaluacion(const string comentariosEvaluacion2){
    comentariosEvaluacion = comentariosEvaluacion2;
}

Evaluacion::void setfechaEvaluacion(const string fechaEvaluacion2){
    fechaEvaluacion = fechaEvaluacion2;
}


void Evaluacion::setPropietario(const Propietario *propietario2) {
    propietario = propietario2;
}
void Evaluacion::setHuesped(const Huesped *huesped2)  {
    huesped = huesped2;
}