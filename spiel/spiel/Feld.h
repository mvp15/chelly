//
//  Feld.h
//  spiel
//
//  Created by Armin Kekić on 29.03.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#ifndef spiel_Feld_h
#define spiel_Feld_h

class Feld {
public:
    Feld(); //constructor
    int fieldSize = 10; //field will contain fieldSize*fieldSize Tiles
    Tile** feld; // matrix of tiles
    void print();
    //function that puts all warriors of the player at position (i,j)
    void startGame(Player& player, int i, int j);
};

Feld::Feld(){
    feld = new Tile*[fieldSize]; //initialize list of arrays
    for (int i=0; i<fieldSize; ++i) {
        feld[i] = new Tile[fieldSize]; //initialize arrays
    }
}

void Feld::print() {
    for (int i=0; i<fieldSize; ++i) {
        for (int j=0; j<fieldSize; ++j) {
            std::cout << "[" << feld[i][j].nWarriors << "] ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void Feld::startGame(Player& player, int i, int j) {
    // start game at position (i,j)
    for (int l=0; l<player.nWarriors; ++l) {
        feld[i][j].addWarrior(player.warriorList[l]); //add warrior to Tile
    }
    
}

#endif
