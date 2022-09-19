//
// Created by orduz on 15/09/2022.
//

#ifndef TAREA_HUESPEDES_TOROS_NEGROS_HUESPED_H
#define TAREA_HUESPEDES_TOROS_NEGROS_HUESPED_H

#include "Persona.h"

class Huesped : public Persona{

    private:

        string infoClinica, ciudadFamiliar;

    public:

        Huesped();
        Huesped(string info, string ciudad);

        string &getInfoClinica() const;
        string &getCiudadFamiliar() const;

        void mostrarHuesped();
        void setInfoClinica(const string info);
        void setCiudadFamiliar(const string ciudad);
};

#endif //TAREA_HUESPEDES_TOROS_NEGROS_HUESPED_H
