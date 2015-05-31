//
//  Tile.h
//  spiel
//
//  Created by Armin Kekić on 29.03.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#ifndef spiel_Tile_h
#define spiel_Tile_h

class Tile {
public:
    bool occ = false; // is the Tile occupied by warriors?
    
    std::vector<Warrior*> warriorsOnTile;// vector of pointers on warriors currently on Tile
    
    std::vector<Warrior*> warriorsOnTileTmp;//temporary list of warriors which have been moved on tile by move
    
    int nWarriors = 0; // number of warriors on Tile
    
    void addWarrior(Warrior* warrior); // adding a warrior to a Tile
    
    void addWarriorTmp(Warrior* warrior); // adding a warrior to the temporary warrior list
    
    void removeWarrior(Warrior* warrior); // removing a warrior from tile
    
    void tmpToNonTmp(); //Move the warriors from the temporary warrior list to the non-temporary warrior list
    
};

void Tile::addWarrior(Warrior* warrior) {
    warriorsOnTile.push_back(warrior);
    nWarriors++;
}

void Tile::addWarriorTmp(Warrior* warrior) {
    warriorsOnTileTmp.push_back(warrior);
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

void Tile::tmpToNonTmp() {
    assert(warriorsOnTile.empty());
    
    //copy tmp to non tmp
    warriorsOnTile = warriorsOnTileTmp;
    
    //delete tmp
    warriorsOnTile.clear();
}
    

#endif
