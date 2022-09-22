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
        string nacimiento;
        int points;

    public:
        Persona();
        Persona(long id2, string name2, string sex2, string nacimiento2, int points2);
        virtual ~Persona(); // Destructor

        void mostrarPersona();

        long getId() const;
        const string &getName() const;
        const string &getSex() const ;
        const string &getNacimiento() const;

        void setId(const long id);
        void setName(const string &name);
        void setSex(const string &sex);
        void setNacimiento(const string &nacimiento);
};

#endif //TAREA_HUESPEDES_TOROS_NEGROS_PERSONA_H