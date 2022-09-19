//
// Created by orduz on 15/09/2022.
//
#ifndef TAREA_HUESPEDES_TOROS_NEGROS_HOGAR_H
#define TAREA_HUESPEDES_TOROS_NEGROS_HOGAR_H

#include<cstdio>
#include<iostream>
#include<string>

using std::string;

class Hogar{

private:

    string direccionHogar;
    int numeroCamasDisponibles;
    bool alojarBebes;
    string descripcionHogar;

public:

    Hogar();
    Hogar(string direccion, int numeroCamas, bool alojaBebes2, string descripcion);

    void mostrarHogar();

    string getDireccion() const;
    int getNumeroCamas() const;
    bool getAlojaBebes() const;
    string getDescripcion() const;

    void setDireccion(string direccion);
    void setNumeroCamas(int numeroCamas);
    void setAlojaBebes(bool alojarBebes);
    void setDescripcion(string descripcion);

};
#endif //TAREA_HUESPEDES_TOROS_NEGROS_HOGAR_H