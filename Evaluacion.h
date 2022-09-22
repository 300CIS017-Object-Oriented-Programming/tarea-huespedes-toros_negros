#ifndef TAREA_HUESPEDES_TOROS_NEGROS_EVALUACION_H
#define TAREA_HUESPEDES_TOROS_NEGROS_EVALUACION_H

#include "Propietario.h"
#include "Huesped.h"

class Evaluacion{
    private:
        int calificacion;
        string comentariosEvaluacion;
        string fechaEvaluacion;

        Propietario *propietario; //al propietario se le evalua
        Huesped *huesped; //el huesped es el que evalua al propietario

    public:
        Evaluacion();
        Evaluacion(int calificacion2, string comentariosEvaluacion2, string fechaEvaluacion2,Propietario *propietario2, Huesped *huesped2);
        virtual ~Evaluacion(); // Destructor
        void mostrarEvaluaciones();

        int getCalificacion() const;
        const string &getComentariosEvaluacion() const;
        const string &getFechaEvaluacion() const;
        Propietario *getPropietario() const;
        Huesped *getHuesped() const;

        void setComentariosEvaluacion(const string &comentariosEvaluacion2);
        void setfechaEvaluacion(const string &fechaEvaluacion2);
        int setCalificacion(int calificacion2);
        void setPropietario(const Propietario *propietario2);
        void setHuesped(const Huesped *huesped2);

        void calcularPuntaje();
};

#endif //TAREA_HUESPEDES_TOROS_NEGROS_EVALUACION_H