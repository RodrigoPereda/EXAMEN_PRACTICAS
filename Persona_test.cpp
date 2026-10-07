/*
 * Persona_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: rodri
 */


#include <gtest/gtest.h>
#include "Persona.h"


TEST(Persona, destructor) {
	// Creo una persona y un default
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;
	{
		Persona p3("000000000B", "MiNombre 2", "Mis Apellidos 2");
		// Solo tiene que haber 2 personas en la lista
		ASSERT_EQ(p2.nPersonas(),2);
		std::cout << "Numero de personas apuntadas en la lista: " << p2.nPersonas() << std::endl;
		// Comprobar que su id es correcto
		ASSERT_TRUE(p2.isOnList("000000000B"));
		std::cout << "¿Está 000000000B en la lista?: " << p2.isOnList("000000000B") << std::endl;
		std::cout << "¿Está 0000000000 en la lista?: " << p2.isOnList("0000000000") << std::endl;
	}
	// Solo tiene que haber 1 personas en la lista
	ASSERT_EQ(p2.nPersonas(),1);
	std::cout << "Numero de personas apuntadas en la lista 2: " << p2.nPersonas() << std::endl;
	// Comprobar que su id es correcto
	ASSERT_FALSE(p2.isOnList("000000000B"));
}
TEST(Persona, constructor) {
    // El test crea 2 objetos: p1 y p2 (sin argumentos)
    Persona p1("123456789A", "MiNombre", "Mis Apellidos");
    Persona p2;
    // Comprueba con p2 que solo hay 1 elemento en la lista
    ASSERT_EQ(p2.nPersonas(), 1);
    // Comprueba que el ID "123456789A" esta en la lista
    ASSERT_TRUE(p2.isOnList("123456789A"));
    // Comprueba que "000000000B" no esta
    ASSERT_FALSE(p2.isOnList("000000000B"));
}
TEST(Persona, print) {
    // El test crea 3 objetos: p1, p2 y p3
    Persona p1("123456789A", "MiNombre", "Mis Apellidos");
    Persona p2;
    Persona p3("000000000B", "MiNombre 2", "Mis Apellidos 2");
    // Escribe en pantalla los resultados de printPersona() y print()
    std::cout << p1.printPersona() << std::endl;
    std::cout << p3.printPersona() << std::endl;
    p1.print();
}




