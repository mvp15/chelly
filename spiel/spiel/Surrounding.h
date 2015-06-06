//
//  Surrounding.h
//  spiel
//
//  Created by Armin Kekić on 31.05.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#ifndef spiel_Surrounding_h
#define spiel_Surrounding_h

#include <vector>

class Player;
class Tile;


enum occupancy{Friend, Enemy, Empty, NoTile};

class Surrounding {
public:
    struct SurroundingTile {
        occupancy occ;
        int nWarriors;
    };
    
    SurroundingTile tileToSurroundingTile(Player* player, Tile* tile);
    
    static const int nSurroundingTiles = 9;
    
    Surrounding();
    
    ~Surrounding();
    
    std::vector<SurroundingTile> surroundingTilesList;
    
    void print();
};

#endif