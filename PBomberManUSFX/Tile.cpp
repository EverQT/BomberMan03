#include "Tile.h"

Tile::Tile()
{
	posicionTileX = 0;
	posicionTileY = 0;
	bomberman = nullptr;
	muroCeramica = nullptr;
	muroMetal = nullptr;
	muroSpace = nullptr;
	sueloCesped = nullptr;
	sueloHielo = nullptr;
	muroHielo = nullptr;

}

Tile::Tile(int _posicionTileX, int _posicionTileY)
{
	posicionTileX = _posicionTileX;
	posicionTileY = _posicionTileY;
	bomberman = nullptr;
	muroCeramica = nullptr;
	muroMetal = nullptr;
	muroSpace = nullptr;
	sueloCesped = nullptr;
	sueloHielo = nullptr;
	muroHielo = nullptr;
}