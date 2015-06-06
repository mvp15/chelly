//
//  Warrior.cpp
//  spiel
//
//  Created by Armin Kekić on 01.06.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//


#include "Warrior.h"

#include "Surrounding.h"
#include "Tile.h"

Surrounding Warrior::getSurrounding(){
    Surrounding* surr = new Surrounding;
    
    //fill in surroundingTiles
    Tile* upleftTile = this->tileOfWarrior->upleft();
    surr->surroundingTilesList[0] = surr->tileToSurroundingTile(this->plr, upleftTile);
    
    Tile* upperTile = this->tileOfWarrior->up();
    surr->surroundingTilesList[1] = surr->tileToSurroundingTile(this->plr, upperTile);
    
    Tile* uprightTile = this->tileOfWarrior->upright();
    surr->surroundingTilesList[2] = surr->tileToSurroundingTile(this->plr, uprightTile);
    
    Tile* leftTile = this->tileOfWarrior->left();
    surr->surroundingTilesList[3] = surr->tileToSurroundingTile(this->plr, leftTile);
    
    Tile* thisTile = this->tileOfWarrior;
    surr->surroundingTilesList[4] = surr->tileToSurroundingTile(this->plr, thisTile);
    
    Tile* rightTile = this->tileOfWarrior->right();
    surr->surroundingTilesList[5] = surr->tileToSurroundingTile(this->plr, rightTile);
    
    Tile* downleftTile = this->tileOfWarrior->downleft();
    surr->surroundingTilesList[6] = surr->tileToSurroundingTile(this->plr, downleftTile);
    
    Tile* downTile = this->tileOfWarrior->down();
    surr->surroundingTilesList[7] = surr->tileToSurroundingTile(this->plr, downTile);
    
    Tile* downrightTile = this->tileOfWarrior->downright();
    surr->surroundingTilesList[8] = surr->tileToSurroundingTile(this->plr, downrightTile);
    
    return *surr;
}