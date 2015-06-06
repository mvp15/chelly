//
//  Surrounding.cc
//  spiel
//
//  Created by Armin Kekić on 05.06.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <iomanip>

#include "Surrounding.h"

#include "Player.h"
#include "Tile.h"
#include "Warrior.h"


Surrounding::Surrounding(){
    for (int i=0; i<9; ++i) {
        SurroundingTile* newSurroundingTile = new SurroundingTile;
        this->surroundingTilesList.push_back(*newSurroundingTile);
    }
}

Surrounding::~Surrounding(){
    this->surroundingTilesList.clear();
}

Surrounding::SurroundingTile Surrounding::tileToSurroundingTile(Player* player, Tile* tile){
    SurroundingTile surrT;
    
    if (tile == nullptr) {
        surrT.nWarriors = 0;
        surrT.occ = NoTile;
        return surrT;
    }
    else{
        surrT.nWarriors = tile->nWarriors;
        
        //if tile is empty, we return an empty surrounding
        if (tile->nWarriors==0) {
            surrT.occ = Empty;
            return surrT;
        }
        else{
            //check if the first warrior in Tile.warriorsOnTile is Friend or Enemy
            if (tile->warriorsOnTile[0]->plr == player) {
                surrT.occ = Friend;
                return surrT;
            }
            else{
                surrT.occ = Enemy;
                return surrT;
            }
        }
    }
}

//overload << -operator for occupancy
std::ostream& operator << (std::ostream& os, occupancy& occ){
    if (occ == Empty) {os << "Empty";}
    else if (occ == Friend){os << "Friend";}
    else if (occ == Enemy){os << "Enemy";}
    else {os << "NoTile";}
    return os;
}

void Surrounding::print(){
    for (int i=0; i<9; ++i) {
        std::cout << "[" <<std::setw(6)<<std::left<< this->surroundingTilesList[i].occ << "," << std::setw(4) << std::right << this->surroundingTilesList[i].nWarriors << "]";
        if ((i+1)%3==0 && i>1) {std::cout << std::endl;}
    }
}