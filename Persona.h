//
// Created by orduz on 15/09/2022.
//

#ifndef TAREA_HUESPEDES_TOROS_NEGROS_PERSONA_H
#define TAREA_HUESPEDES_TOROS_NEGROS_PERSONA_H

#include<cstdio>
#include<iostream>
#include<string>

using std::string;

class Persona{

    private:

        long id;
        string name;
        string sex;
        int points;

    public:

        Persona();
        Persona(long id2, string name2, string sex2, int points2);

        void mostrarPersona();

};

#endif //TAREA_HUESPEDES_TOROS_NEGROS_PERSONA_H
