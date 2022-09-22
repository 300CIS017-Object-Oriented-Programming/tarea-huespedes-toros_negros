#ifndef TAREA_HUESPEDES_TOROS_NEGROS_SISTEMA_H
#define TAREA_HUESPEDES_TOROS_NEGROS_SISTEMA_H

#include<unordered_map>
#include<vector>

#include "Persona.h"
#include "Hogar.h"
#include "Reserva.h"
#include "Evaluacion.h"

using std::vector;
using std::unordered_map;

class Sistema{
    private:
        unordered_map<int, Propietario*> personas;
        unordered_map<int, Huesped*> huespedes;
        unordered_map<string, Hogar*> hogares;
        vector<Reserva*> reservas;
        unordered_map<string, Evaluacion*> evaluaciones;

    public:
        void agregarEvaluaciones();
        void agregarPersona();
        void buscarPropietario(int id);
        void buscarHuesped(int id);
        void buscarEvaluacion(string name);
        void crearReservas();
};
#endif //TAREA_HUESPEDES_TOROS_NEGROS_SISTEMA_H
