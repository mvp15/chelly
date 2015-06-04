//
//  Player.h
//  spiel
//
//  Created by Armin Kekić on 29.03.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#ifndef spiel_Player_h
#define spiel_Player_h

//#include "Warrior.h"
#include <vector>

class Warrior;


class Player {
public:
    Player(); //Constructor
    std::vector<Warrior> warriorList; // array containing warriors
    const int nWarriors = 100;
};

//Player::~Player(){
//    for (int i=0; i<nWarriors; ++i) {
//        delete warriorList[i];
//    }
//}

#endif
