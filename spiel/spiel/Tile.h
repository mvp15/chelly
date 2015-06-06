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


class Feld;
class Warrior;

class Tile {
public:
    // is the Tile occupied by warriors?
    bool occ = false;
    
    // vector of pointers on warriors currently on Tile
    std::vector<Warrior*> warriorsOnTile;
    
    //temporary list of warriors which have been moved on tile by move
    std::vector<Warrior*> warriorsOnTileTmp;
    
    // number of warriors on Tile
    int nWarriors = 0;
    
    Feld* feldOfTile;
    
    //inices of the tile in the field in which it was created
    int feldIndexI = -1;
    int feldIndexJ = -1;
    
    // adding a warrior to a Tile
    void addWarrior(Warrior* warrior);
    
    // adding a warrior to the temporary warrior list
    void addWarriorTmp(Warrior* warrior);
    
    // removing a warrior from tile
    void removeWarrior(Warrior* warrior);
    
    // removing a warrior from temp warrior list
    void removeWarriorTmp(Warrior* warrior);
    
    //Move the warriors from the temporary warrior list to the non-temporary warrior list
    void tmpToNonTmp();
    
    //return Tile in a certain direction w.r.t. this Tile
    Tile* left();
    Tile* right();
    Tile* up();
    Tile* down();
    Tile* upleft();
    Tile* upright();
    Tile* downleft();
    Tile* downright();
    
};

#endif
