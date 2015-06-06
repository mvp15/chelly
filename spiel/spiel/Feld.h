//
//  Feld.h
//  spiel
//
//  Created by Armin Kekić on 29.03.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#ifndef spiel_Feld_h
#define spiel_Feld_h


//class Tile;
class Player;
class Warrior;
class Tile;

class Feld {
public:
    Feld(); //constructor
    
    int fieldSize = 10; //field will contain fieldSize*fieldSize Tiles
    
    Tile** feld; // matrix of tiles
    
    void print();
    
    //function that puts all warriors of the player at position (i,j)
    void startGame(Player& player, int i, int j);
    
    //move warrior from warrior list of fromTile to tmp warrior List of toTile
    void moveWarrior(Warrior* warrior, Tile& fromTile, Tile& toTile);
    
    //Calls Tile::tmpToNonTmp on all tiles of the field
    void tmpToNonTmp();
};


#endif