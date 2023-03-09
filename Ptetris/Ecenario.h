#pragma once
#include<iostream>
#include<string>
using namespace std;

class Ecenario

{
private:
	string color;
	string nombre;
	string forma;
	string textura;
	string sonido;
	string interaccion;
	int alto;
	int ancho;
	int nivel;
	char mover;

public:

	string getNombre() { return nombre; }
	void setNombre(string _nombre) { nombre = _nombre; }
	/* string nombre; */
	string getColor() { return color; }
	void setColor(string _color) { color = _color; }

	string getTextura() { return textura; }
	void setTextura(string _Textura) { textura = _Textura; }

	string getSonido() { return sonido; }
	void setSonido(string _Sonido) { sonido = _Sonido; }

	string getInteraccion() { return interaccion; }
	void setInteraccion(string _Interaccion) { interaccion = _Interaccion; }

	int getAlto() { return alto; }
	void setAlto(int _Alto) { alto = _Alto; }

	int getAncho() { return ancho; }
	void setAncho(int _Ancho) { ancho = _Ancho; }

protected:

};

