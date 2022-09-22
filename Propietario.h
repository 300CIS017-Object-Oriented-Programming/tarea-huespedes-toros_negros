#ifndef TAREA_HUESPEDES_TOROS_NEGROS_PROPIETARIO_H
#define TAREA_HUESPEDES_TOROS_NEGROS_PROPIETARIO_H

#include "Hogar.h"
#include "Persona.h"

class Propietario: public Persona{

    private:
        Hogar *hogar;
        bool disponibilidadPropietario;

    public:
        Propietario();
        Propietario(bool disponibilidad, Hogar *hogar);
        virtual ~Propietario(); // Destructor

        bool getDisponibilidadPropietario() const;
        Hogar *getHogar() const;
        void mostrarPropietarios();
        void setDisponibilidadPropietario(const bool disponibilidad);
        void setHogar(Hogar *hogar2);

        void cambiarEstado();
        void calcularPuntaje();

};
#endif //TAREA_HUESPEDES_TOROS_NEGROS_PROPIETARIO_H