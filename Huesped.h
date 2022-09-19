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

        string &getInfoClinica() const;
        string &getCiudadFamiliar() const;

        void setInfoClinica(const string);
        void setCiudadFamiliar(const string);
};

#endif //TAREA_HUESPEDES_TOROS_NEGROS_HUESPED_H
