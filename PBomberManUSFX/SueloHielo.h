#pragma once
#include "GameActor.h"
class SueloHielo :
    public GameActor
{
public:
    SueloHielo(Texture* _textura, Tile* _tileActual);
    void setTileActual(Tile* _tileNuevo);
};
