//
//  Tile.h
//  spiel
//
//  Created by Armin Kekić on 29.03.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#ifndef spiel_Tile_h
#define spiel_Tile_h

struct Tile {
    bool occ = false; // is the Tile occupied by warriors?
    std::vector<Warrior*> warriorsOnTile;// vector of pointers on warriors currently on Tile
    int nWarriors = 0; // number of warriors on Tile
    void addWarrior(Warrior& warrior); // adding a warrior to a Tile
};

void Tile::addWarrior(Warrior& warrior) {
    warriorsOnTile.push_back(&warrior);
    nWarriors++;
}
#endif
