/*
 * Persona.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: rodri
 */

#include "Persona.h"
#include <iostream>

//Declaración de miembros estáticos y, opcionalmente, sunicialización
std::vector<Persona *> Persona::personList;

//Constructor Dummy
Persona::Persona(){}

//Constructor con identificadores
Persona::Persona(std::string ID, std::string Nombre, std::string Apellidos) : nombre(Nombre),apellidos(Apellidos),ID(ID){
	if(isOnList(ID) == false){
		personList.emplace_back(this); //Insertar elemento en la lista
	}
}

Persona::~Persona(){
	int remove = -1;
	for(int i = 0; i <nPersonas(); i++){
		if(personList[i]==this){
			remove=i;
		}
	}
	if(remove != -1){
		personList.erase(personList.begin()+remove);
	}
}
// Metodo que comprueba si un elemento está en la lista
bool Persona::isOnList(std::string identificador) {
	for(std::vector<Persona *>::iterator it=personList.begin(); it < personList.end(); it++) {
		if((*it)->ID==identificador) {    //Desreferencia el iterador *it para acceder al puntero de la persona y accede a su atributo ID
			return true; // Encontrado!
		}
	}
	return false; // No encontrado
}

// Metodo print sin usar el operador << sobrecargado
void Persona::print() {
    std::cout << "Lista de Personas en la lista" << std::endl;
    for (int i = 0; i < nPersonas(); i++) {											   //Leemos la lista hasta su longitud maxima
        std::cout << "Personal Data: " << personList[i]->printPersona() << std::endl;  //Va a la dirección de memoria a la que apunta personList[i y ejecuta la función printPersona() del objeto que está allí
    }
}
