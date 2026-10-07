/*
 * Alumnos.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: rodri
 */
#include "Alumno.h"
#include <iostream>

//Constructores y Destructores

// Constructor
template <int curso> Alumno<curso>::Alumno(std::string ID, std::string Nombre, std::string Apellidos) : Persona(ID, Nombre, Apellidos) {
}

// Destructor
template <int curso> Alumno<curso>::~Alumno() {
}

// Metodos
template <int curso> bool Alumno<curso>::matricula(std::string asignatura) {
    for (size_t i = 0; i < courseList.size(); i++) {
        if (courseList[i] == asignatura) {
            return false; // Ya esta matriculada
        }
    }
    courseList.push_back(asignatura); // Se añade a la lista
    return true; // matricula hecho
}

template <int curso> void Alumno<curso>::print() {
    std::cout << "Listado de asignaturas en curso " << curso << "/" << (curso+1) << std::endl;
    std::cout << "Alumno: " << printPersona() << std::endl;
    for (size_t i = 0; i < courseList.size(); i++) {				//Uso mismo bucle para leer la lista pero esta vez en vez de añadir, escribo por pantalla
        std::cout << "Asignatura: " << courseList[i] << std::endl;
    }
}
// Declaro los posibles valores de curso para que se pueda usar la clase Alumno con esos tipos, en este caso con el 24 ya seria suficiente.
template class Alumno<24>;


