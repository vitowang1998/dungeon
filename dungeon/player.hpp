//
//  player.hpp
//  dungeon
//
//  Created by Haoran Wang on 2020-01-03.
//  Copyright © 2020 Haoran Wang. All rights reserved.
//

#ifndef player_hpp
#define player_hpp

#include <stdio.h>
#include "character.hpp"

class Player: public Character {
public:
    void moveUp();
    void moveDown();
    void fight();
};

#endif /* player_hpp */
