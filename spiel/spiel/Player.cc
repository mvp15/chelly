//
//  Player.cc
//  spiel
//
//  Created by Armin Kekić on 01.06.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//


#include "Player.h"

#include "Warrior.h"

Player::Player() {
    for (int i=0; i<nWarriors; ++i) {
        Warrior* newWarrior = new Warrior;
        warriorList.push_back(*newWarrior);
    }
}