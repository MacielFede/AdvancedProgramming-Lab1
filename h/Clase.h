#ifndef CLASE_H
#define CLASE_H

#include <iostream>
#include "Turno.h"
#include "Inscripcion.h"
using namespace std;

class Clase 
{
	private:
		int id;
		string nombre;
		Turno turno;
		int tope;
	protected:
		Inscripcion * inscripciones;
	public:
		// Constructor
		Clase(int id, string nombre, Turno turno); 
	  
		// Getters
		int getId();
		string getNombre();
		Turno getTurno();
		int getTope();
		
		// Setters
		void setId(int nuevoId);
		void setNombre(string nuevoNombre);
		void setTurno(Turno nuevoTurno);
		void setTope(int nuevoTope);
		
		// Destructor
		~Clase(); 
		
		// Métodos
		virtual int cupo() = 0;
};

#endif