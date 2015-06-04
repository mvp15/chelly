//
//  Tile.h
//  spiel
//
//  Created by Armin Kekić on 29.03.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#ifndef spiel_Tile_h
#define spiel_Tile_h

#include <vector>
#include <cassert>

//#include "Warrior.h"

class Feld;
class Warrior;

class Tile {
public:
    bool occ = false; // is the Tile occupied by warriors?
    
    std::vector<Warrior*> warriorsOnTile;// vector of pointers on warriors currently on Tile
    
    std::vector<Warrior*> warriorsOnTileTmp;//temporary list of warriors which have been moved on tile by move
    
    int nWarriors = 0; // number of warriors on Tile
    
    void addWarrior(Warrior* warrior); // adding a warrior to a Tile
    
    void addWarriorTmp(Warrior* warrior); // adding a warrior to the temporary warrior list
    
    void removeWarrior(Warrior* warrior); // removing a warrior from tile
    
    void removeWarriorTmp(Warrior* warrior); // removing a warrior from temp warrior list
    
    void tmpToNonTmp(); //Move the warriors from the temporary warrior list to the non-temporary warrior list
    
    Feld* feldOfTile;
    
    //inicey of the tile in the field in which it was created
    int feldIndexI = -1;
    int feldIndexJ = -1;
    
};


    

#endif
