//
//  warrior.cpp
//  dungeon
//
//  Created by Haoran Wang on 2020-01-03.
//  Copyright © 2020 Haoran Wang. All rights reserved.
//

#include "warrior.hpp"
#include "logger.hpp"

using namespace std;

Logger logger;

Warrior::Warrior() {
    logger.write("Warrior Constructor started.");
    
    // set the starting attributes for the warrior character
    this->setHP(1000);
    this->setATK(10);
    this->setDEF(10);
    
    logger.write("Warrior Constructor finished");
}

void Warrior::print() {
    cout << "X";
}

