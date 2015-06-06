//
//  Tile.cc
//  spiel
//
//  Created by Armin Kekić on 01.06.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#include "Tile.h"

#include "Warrior.h"
#include "Feld.h"

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
//    assert(warriorsOnTile.empty());
    
    //copy tmp to non tmp
    warriorsOnTile = warriorsOnTileTmp;
    
    //delete tmp
    warriorsOnTileTmp.clear();
}

Tile* Tile::left(){
    //if this Tile is at the left end of the field, we return a nullptr
    if (this->feldIndexJ == 0) {
        return nullptr;
    }
    else{
        //return Tile to the left
        return &(feldOfTile->feld[feldIndexI][feldIndexJ-1]);
    }
}

Tile* Tile::right(){
    int fieldSize = feldOfTile->fieldSize;
    
    //if this Tile is at the right end of the field, we return a nullptr
    if (this->feldIndexJ == fieldSize) {
        return nullptr;
    }
    else{
        //return Tile to the right
        return &(feldOfTile->feld[feldIndexI][feldIndexJ+1]);
    }
}

Tile* Tile::up(){
    //if this Tile is at the top end of the field, we return a nullptr
    if (this->feldIndexI == 0) {
        return nullptr;
    }
    else{
        //return upper Tile
        return &(feldOfTile->feld[feldIndexI-1][feldIndexJ]);
    }
}

Tile* Tile::down(){
    int fieldSize = feldOfTile->fieldSize;
    
    //if this Tile is at the bottom end of the field, we return a nullptr
    if (this->feldIndexI == fieldSize) {
        return nullptr;
    }
    else{
        //return Tile to the bottom
        return &(feldOfTile->feld[feldIndexI+1][feldIndexJ]);
    }
}

Tile* Tile::upleft(){
    //if this Tile is at the left or top end of the field, we return a nullptr
    if (this->feldIndexI == 0 || this->feldIndexJ == 0) {
        return nullptr;
    }
    else{
        //return Tile to the up left
        return &(feldOfTile->feld[feldIndexI-1][feldIndexJ-1]);
    }
}

Tile* Tile::upright(){
    int fieldSize = feldOfTile->fieldSize;
    
    //if this Tile is at the right or top end of the field, we return a nullptr
    if (this->feldIndexI == 0 || this->feldIndexJ == fieldSize) {
        return nullptr;
    }
    else{
        //return Tile to the up right
        return &(feldOfTile->feld[feldIndexI-1][feldIndexJ+1]);
    }
}

Tile* Tile::downleft(){
    int fieldSize = feldOfTile->fieldSize;
    
    //if this Tile is at the left or bottom end of the field, we return a nullptr
    if (this->feldIndexI == fieldSize || this->feldIndexJ == 0) {
        return nullptr;
    }
    else{
        //return Tile to the bottom left
        return &(feldOfTile->feld[feldIndexI+1][feldIndexJ-1]);
    }
}

Tile* Tile::downright(){
    int fieldSize = feldOfTile->fieldSize;
    
    //if this Tile is at the right or bottom end of the field, we return a nullptr
    if (this->feldIndexI == fieldSize || this->feldIndexJ == fieldSize) {
        return nullptr;
    }
    else{
        //return Tile to the bottom right
        return &(feldOfTile->feld[feldIndexI+1][feldIndexJ+1]);
    }
}