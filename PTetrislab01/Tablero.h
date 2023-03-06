#pragma once
#include"Bloque.h"

class Tablero
{
	private:
		int FilaLimiteSuperior;
		int FilaActual;
		int numeroFilasEliminadas;
		Bloque bloqueSiguiente;

public:
	Tablero();

	void inicializarTablero();

	bool rotarBloque();
	void bajarBloque();
	bool moverBloque(int direccion);

	//metodos accesores
	void SetNombre(string _nombre) { nombre = _nombre; }
	string getNombre() { return nombre; }
	return false;

};

