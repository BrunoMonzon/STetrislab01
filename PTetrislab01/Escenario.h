#pragma once
#include <iostream>
#include <string>
#include <Tablero>
using namespace std;

class Escenario
{
private:
	int alto;
	int ancho;
	string TipoBorde;
	string imagenFondo;
	string nombre;
	int Puntaje;
	int MejorPuntaje;
	int nivel;
	int numerodeVidas;
	int numeroFilasEliminadas;
	int numeroFilasActuales;
	int numeroFilasTotales;
public:
	void setNombre(string _nombre) {nombre = _nombre; }
	string getNombre;
	

	void setTablero(Tablero _tablero) { Tablero = _tablero; }

};

