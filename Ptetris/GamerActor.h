#pragma once
#include "GameManager.h"
class GamerActor
{

private:
	//Posicion x, y en la textura de ventana principal
	int posicionX;
	int posicionY;

	// Ancho y Alto de la imagen del objeto en pixeles
	int ancho;
	int alto;

	bool solido;
	bool indestructible;
	bool visible;
	bool enMovimiento;


	int velocidad;
	int vidas;


	GameManager direccionActual;
	GameManager direccionSiguiente;


public:

	// Metodos accesores
	int getPosicionX() { return posicionX; }
	int getPosicionY() { return posicionY; }
	int getAncho() { return ancho; }
	int getAlto() { return alto; }
	bool getSolido() { return solido; }
	bool getIndestructible() { return indestructible; }
	bool getVisible() { return visible; }
	bool getEnMovimiento() { return enMovimiento; }
	int getVelocidad() { return velocidad; }
	int getVidas() { return vidas; }


	void setPosicionX(int _posicionX) { posicionX = _posicionX; }
	void setPosicionY(int _posicionY) { posicionY = _posicionY; }
	void setAncho(int _ancho) { ancho = _ancho; }
	void setAlto(int _alto) { alto = _alto; }
	void setSolido(bool _solido) { solido = _solido; }
	void setIndestructible(bool _indestructible) { indestructible = _indestructible; }
	void setVisible(bool _visible) { visible = _visible; }
	void setEnMovimiento(bool _enMovimiento) { enMovimiento = _enMovimiento; }

	void setVelocidad(int _velocidad) { velocidad = _velocidad; }

	void setVidas(int _vidas) { vidas = _vidas; }


};

