#include <iostream>
#include <iomanip>

#include "Surrounding.h"
#include "Warrior.h"
#include "Player.h"
#include "Tile.h"
#include "Feld.h"


using namespace std;


int main(int argc, const char * argv[]) {
    
    Feld testfeld;
    testfeld.print();
    
    Player player1;
    
    testfeld.startGame(player1, 0, 0);
    testfeld.print();
    
    
    //test moving Warriors
    Tile currentTile = testfeld.feld[0][0];
    Tile toTile = testfeld.feld[0][1];
    for (int i=0;i<50; ++i) {
        Warrior* currentWarrior = testfeld.feld[0][0].warriorsOnTile[0];
        testfeld.moveWarrior(currentWarrior, testfeld.feld[0][0], testfeld.feld[0][1]);
    }
    testfeld.tmpToNonTmp();
    
    testfeld.print();
    
    Surrounding surr = testfeld.feld[0][1].warriorsOnTile[0]->getSurrounding();
    std::cout << "Surrounding:" << std::endl;
    surr.print();
    
    
    return 0;
}
