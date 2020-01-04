//
//  main.cpp
//  dungeon
//
//  Created by Haoran Wang on 2020-01-03.
//  Copyright © 2020 Haoran Wang. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "warrior.hpp"
#include "utils.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "----------------------------" << endl;
    cout << "Welcome to the dungeon game." << endl;
    cout << "Now, please choose your player type" << endl;
    cout << "1: Warrior" << endl;
    cout << "2: Knight" << endl;
    cout << "3: Vampire" << endl;
    cout << "4: Assassin" << endl;
    cout << "5: Wizard" << endl;
    
    int userInput;
    try {
        cin >> userInput;
    } catch (...) {
        
    }
    
    Player *p = nullptr;
    Utils util;
    
    switch (userInput) {
        case 1:
            cout << "The user selected Warrior." << endl;
            p = new Warrior();
            break;
        default:
            cout << "Invalid input for player type selection." << endl;
            break;
    }
    
    // invariant: The player type is correctly initialized
    
    util.clearScreen();
    
    
    
    
    return 0;
}

