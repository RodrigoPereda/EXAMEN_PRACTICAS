/*
 * Persona.h
 *
 *  Created on: 7 oct 2026
 *      Author: rodri
 */
#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream> // declaración de std, cout …
#include <string> // declaración de string
#include <vector> // declaración de vector

class Persona{
private:
protected:
	std::string nombre;
	std::string apellidos;
	std::string ID;
	static std::vector<Persona *> personList; //Compartido por todos los objetos de clase Persona

public:

	//2 Constructores y 1 Destructor
	//Constructor dummy. No inserta nada en personList
	Persona();
	Persona(std::string ID, std::string Nombre, std::string Apellidos);
	//Destructor
	virtual ~Persona();

	//Metodos
	bool isOnList(std::string identificador);
	virtual void print();
	std::string printPersona(){
		std::string ret= ID + std::string(" : ") + apellidos + std::string(" , ") + nombre;
		return ret;
	}
	int nPersonas(){return personList.size();}

};

//Sobre escribe el operador stream para escribir el nombre de la persona
std::ostream& operator <<(std::ostream& os, Persona& person);


#endif /* PERSONA_H_ */
