
#include <iostream>
#include <vector>

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
//    Adressentest
//    cout << "Im Feld:" << endl;
//    for (int i=0; i<100; ++i) {
//        bool same = (testfeld.feld[0][0].warriorsOnTile[i] == &player1.warriorList[i]);
//        cout << testfeld.feld[0][0].warriorsOnTile[i] << " " << &player1.warriorList[i] << " " << same << endl;
//    }
    
    
    std::cout << "Hello, test!\n";
	std::cin.get();
    return 0;
}
