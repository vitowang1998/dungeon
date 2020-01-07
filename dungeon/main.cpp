//
//  main.cpp
//  dungeon
//
//  Created by Haoran Wang on 2020-01-03.
//  Copyright © 2020 Haoran Wang. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include "warrior.hpp"
#include "utils.hpp"
#include "item.hpp"
#include "logger.hpp"

using namespace std;

// TODO
//typedef Item * MAP[50][50];

int main(int argc, const char * argv[]) {
    
    Item * map[50][50];
    Player *p = nullptr;
    Utils util;
    ifstream reader;
    string line;
    Logger logger;
    
    logger.write("Start writing welcome messages.");
    
    cout << "----------------------------" << endl;
    cout << "Welcome to the dungeon game." << endl;
    cout << "Now, please choose your player type" << endl;
    cout << "1: Warrior" << endl;
    cout << "2: Knight" << endl;
    cout << "3: Vampire" << endl;
    cout << "4: Assassin" << endl;
    cout << "5: Wizard" << endl;
    
    logger.write("Finished writing welcome messages.");
    
    int userInput;
    try {
        cin >> userInput;
    } catch (...) {
        
    }
    
    
    
    switch (userInput) {
        case 1:
            logger.write("The user selected Warrior.");
            p = new Warrior();
            break;
        default:
            cout << "Invalid input for player type selection." << endl;
            break;
    }
    map[0][0] = p;
    // invariant: The player type is correctly initialized
    
    util.clearScreen();
//
//    reader.open("floor1.txt");
//
//    while (!reader.eof()) {
//        reader >> line;
//        cout << line;
//    }

    
    
//    for (int i = 0; i < 49; ++i) {
//        for (int j = 0; j < 49; ++j) {
//            map[i][j]->print();
//            break;
//        }
//    }
    
    
    return 0;
}

