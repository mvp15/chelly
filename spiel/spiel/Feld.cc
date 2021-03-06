//
//  Feld.cc
//  spiel
//
//  Created by Armin Kekić on 01.06.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>

#include "Feld.h"

#include "Tile.h"
#include "Player.h"
#include "Warrior.h"


Feld::Feld(){
    feld = new Tile*[fieldSize]; //initialize list of arrays
    for (int i=0; i<fieldSize; ++i) {
        feld[i] = new Tile[fieldSize]; //initialize arrays
    }
    //store indices of tiles in field inside the tiles
    for (int i=0; i<fieldSize; ++i) {
        for (int j=0; j<fieldSize; ++j) {
            feld[i][j].feldIndexI = i;
            feld[i][j].feldIndexJ = j;
            feld[i][j].feldOfTile = this;
        }
    }
}

void Feld::print() {
    for (int i=0; i<fieldSize; ++i) {
        for (int j=0; j<fieldSize; ++j) {
            std::cout << "[" << std::setw(3) << std::left << feld[i][j].nWarriors << "] ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void Feld::startGame(Player& player, int i, int j) {
    // start game at position (i,j)
    for (int l=0; l<player.nWarriors; ++l) {
        feld[i][j].addWarrior(&(player.warriorList[l])); //add warrior to Tile
    }
    
}

void Feld::moveWarrior(Warrior* warrior, Tile& fromTile, Tile &toTile){
    toTile.addWarriorTmp(warrior);
    fromTile.removeWarrior(warrior);
}

void Feld::tmpToNonTmp(){
    for (int i=0; i<fieldSize; ++i) {
        for (int j=0; j<fieldSize; ++j) {
            feld[i][j].tmpToNonTmp();
        }
    }
}