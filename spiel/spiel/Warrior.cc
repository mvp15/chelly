//
//  Warrior.cpp
//  spiel
//
//  Created by Armin Kekić on 01.06.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <cassert>

#include "Warrior.h"
#include "Tile.h"

Surrounding Warrior::getSurrounding(){
    Surrounding* surr = new Surrounding;
    
    int indexI = (*tileOfWarrior).feldIndexI;
    
    return *surr;
}

