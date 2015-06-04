//
//  Tile.cc
//  spiel
//
//  Created by Armin Kekić on 01.06.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//


#include "Tile.h"

#include "Warrior.h"

void Tile::addWarrior(Warrior* warrior) {
    warriorsOnTile.push_back(warrior);
    warrior->tileOfWarrior = this;
    nWarriors++;
}

void Tile::addWarriorTmp(Warrior* warrior) {
    warriorsOnTileTmp.push_back(warrior);
    warrior->tileOfWarrior = this;
    nWarriors++;
}

void Tile::removeWarrior(Warrior* warrior) {
    //find Warrior to delete in warriorsOnTile
    std::vector<Warrior*>::iterator iter;
    iter = std::find(warriorsOnTile.begin(), warriorsOnTile.end(), warrior);
    
    //erase that Warrior from warriorsOnTile
    
    warriorsOnTile.erase(iter);
    nWarriors--;
}

void Tile::removeWarriorTmp(Warrior* warrior) {
    //find Warrior to delete in warriorsOnTile
    std::vector<Warrior*>::iterator iter;
    iter = std::find(warriorsOnTileTmp.begin(), warriorsOnTileTmp.end(), warrior);
    
    //erase that Warrior from warriorsOnTile
    
    warriorsOnTileTmp.erase(iter);
    nWarriors--;
}

void Tile::tmpToNonTmp() {
    assert(warriorsOnTile.empty());
    
    //copy tmp to non tmp
    warriorsOnTile = warriorsOnTileTmp;
    
    //delete tmp
    warriorsOnTile.clear();
}