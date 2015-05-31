//
//  Warrior.h
//  spiel
//
//  Created by Armin Kekić on 29.03.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#ifndef spiel_Warrior_h
#define spiel_Warrior_h
class Player; //forward declaration of class Player such that we can use a pointer to it

class Warrior {
public:
    bool alive = true;
    Player* plr; //pointer to the player the warior belongs to
};

#endif
