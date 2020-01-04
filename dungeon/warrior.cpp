//
//  warrior.cpp
//  dungeon
//
//  Created by Haoran Wang on 2020-01-03.
//  Copyright © 2020 Haoran Wang. All rights reserved.
//

#include "warrior.hpp"

Warrior::Warrior() {
    std::cout << "Warrior Constructor started." << std::endl;
    
    // set the starting attributes for the warrior character
    this->setHP(1000);
    this->setATK(10);
    this->setDEF(10);
    
    std::cout << "Warrior Constructor finished" << std::endl;
}



