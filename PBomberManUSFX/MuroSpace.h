#pragma once
#include "GameActor.h"
class MuroSpace :
    public GameActor
{
public:
    MuroSpace(Texture* _textura, Tile* _tileActual);
    void setTileActual(Tile* _tileNuevo);
};

