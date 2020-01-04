//
//  warrior.hpp
//  dungeon
//
//  Created by Haoran Wang on 2020-01-03.
//  Copyright © 2020 Haoran Wang. All rights reserved.
//

#ifndef warrior_hpp
#define warrior_hpp

#include <stdio.h>
#include <iostream>
#include "player.hpp"

class Warrior: public Player {
public:
    // constructor
    Warrior();
    // override the print method
    void print();
};

#endif /* warrior_hpp */
