/*
 * Alumnos_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: rodri
 */

#include <gtest/gtest.h>
#include <iostream>
#include "Alumno.h"

TEST(Alumno, test_general) {
    //Declaro 3 alumnos del curso 24
    Alumno<24> a1("1A", "Nombre 1", "Apellidos 1");
    Alumno<24> a2("2A", "Nombre 2", "Apellidos 2");
    Alumno<24> a3("3A", "Nombre 3", "Apellidos 3");

    Persona dummy;

    //Comprobar el numero de elementos en la lista de personas
    ASSERT_EQ(dummy.nPersonas(), 3);

    //Comprobar 2A está en lista
    ASSERT_TRUE(dummy.isOnList("2A"));

    //Matricular a a1 en 4 asignaturas
    a1.matricula("ASE");
    a1.matricula("Embebidos");
    a1.matricula("SEM");
    a1.matricula("ASE");

    //ASignaturas de 1A
    a2.print();

    //Solo hay 3 asignaturas matriculadas
    ASSERT_EQ(a1.courseList.size(), 3);
    std::cout << "Numero de matriculaciones de 1A: " << a1.courseList.size() << std::endl;

    //Final
    std::cout << " Cuestion a justificar en la memoria" << std::endl;
    Persona *dat;
    dat = &a1;
    dat->print();
}


