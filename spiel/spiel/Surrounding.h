//
//  Surrounding.h
//  spiel
//
//  Created by Armin Kekić on 31.05.15.
//  Copyright (c) 2015 Armin Kekić. All rights reserved.
//

#ifndef spiel_Surrounding_h
#define spiel_Surrounding_h
enum occupancy{Friend, Enemy, Empty};

struct Surrounding {
    struct SurroundingTile {
        occupancy occ;
        int nWarriors;
    };
    std::vector<SurroundingTile> surroundingTilesList;
};

#endif
