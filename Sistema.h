//
// Created by orduz on 15/09/2022.
//

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

        unordered_map<int, Persona*> personas;
        unordered_Map<string, Hogar*> hogares;
        vector<Reserva*> reservas;
        vector<Evaluacion*> evaluaciones;

    public:

        void agregarEvaluaciones();
        void agregarPropietario();
        void crearReservas();

};
#endif //TAREA_HUESPEDES_TOROS_NEGROS_SISTEMA_H
