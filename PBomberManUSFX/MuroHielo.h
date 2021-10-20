#pragma once
#include "GameActor.h"
class MuroHielo :
    public GameActor
{
public:
    MuroHielo(Texture* _textura, Tile* _tileActual);
    void setTileActual(Tile* _tileNuevo);
};
