//
// Created by orduz on 15/09/2022.
//

#ifndef TAREA_HUESPEDES_TOROS_NEGROS_RESERVA_H
#define TAREA_HUESPEDES_TOROS_NEGROS_RESERVA_H

#include<cstdio>
#include<iostream>
#include<string>

#include "Propietario.h"
#include "Huesped.h"

class Reserva{

    private:
        string fechaInicio;
        string fechaFin;
        Propietario *propietario;
        Huesped *huesped;

    public:
        Reserva();
        Reserva(string fechaInicio2, string fechaFin2,Propietario *propietario2, Huesped *huesped2);

        void mostrarReservas();

        string &getFechaInicio() const;
        string &getFechaFin() const;
        Propietario *getPropietario() const;
        Huesped *getHuesped() const;

        void setFechaInicio(const string fechaInicio2);
        void setFechaFin(const string fechaFin2);
        void setPropietario(const Propietario *propietario2);
        void setHuesped(const Huesped *huesped2);
};
#endif //TAREA_HUESPEDES_TOROS_NEGROS_RESERVA_H