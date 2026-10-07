/*
 * Alumnos.h
 *
 *  Created on: 7 oct 2026
 *      Author: rodri
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

#include "Persona.h"
#include <vector>
#include <string>

template <int curso>
class Alumno : public Persona {
public:
    std::vector<std::string> courseList; // lista asignaturas

    //Constructor
    Alumno(std::string ID, std::string Nombre, std::string Apellidos);
    //Matricula en asignatura
    bool matricula(std::string asignatura);
    //Escribe lista asignaturas
    void print();
    virtual ~Alumno();
};

#endif /* ALUMNO_H_ */
