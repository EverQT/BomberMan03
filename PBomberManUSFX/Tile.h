#pragma once
#include <SDL.h>

//
//#include "Bomberman.h"
//#include "MuroCeramica.h"
//#include "MuroMetal.h"
//#include "SueloCesped.h"

class Bomberman;
class MuroCeramica;
class MuroMetal;
class SueloCesped;
class SueloHielo;
class MuroSpace;
class MuroHielo;

class Tile
{
private:
	Bomberman* bomberman;
	MuroCeramica* muroCeramica;
	MuroMetal* muroMetal;
	SueloCesped* sueloCesped;
	SueloHielo* sueloHielo;
	MuroSpace* muroSpace;
	MuroHielo* muroHielo;

	int posicionTileX;
	int posicionTileY;

public:
	static const int anchoTile = 34;
	static const int altoTile = 34;

	// Constructores y destructores
	Tile();
	Tile(int _posicionTileX, int _posicionTileY);

	// Metodos accesores
	Bomberman* getBomberman() { return bomberman; }
	MuroCeramica* getMuroCeramica() { return muroCeramica; }
	MuroMetal* getMuroMetal() { return muroMetal; }
	MuroSpace* getMuroSpace() { return muroSpace; }
	MuroHielo* getMuroHielo() { return muroHielo; }
	SueloCesped* getSueloCesped() { return sueloCesped; }
	SueloHielo* getSueloHielo() { return sueloHielo; }
	int getPosicionTileX() { return posicionTileX; }
	int getPosicionTileY() { return posicionTileY; }

	void setBomberman(Bomberman* _bomberman) { bomberman = _bomberman; }
	void setMuroCeramica(MuroCeramica* _muroCeramica) { muroCeramica = _muroCeramica; }
	void setMuroMetal(MuroMetal* _muroMetal) { muroMetal = _muroMetal; }
	void setMuroSpace(MuroSpace* _muroSpace) { muroSpace = _muroSpace; }
	void setMuroHielo(MuroHielo* _muroHielo) { muroHielo = _muroHielo; }
	void setSueloCesped(SueloCesped* _sueloCesped) { sueloCesped = _sueloCesped; }
	void setSueloHielo(SueloHielo* _sueloHielo) { sueloHielo = _sueloHielo; }
	void setPosicionTileX(int _posicionTileX) { posicionTileX = _posicionTileX; }
	void setPosicionTileY(int _posicionTileY) { posicionTileY = _posicionTileY; }
};

