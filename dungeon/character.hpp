//
//  character.hpp
//  dungeon
//
//  Created by Haoran Wang on 2020-01-03.
//  Copyright © 2020 Haoran Wang. All rights reserved.
//

#ifndef character_hpp
#define character_hpp

#include <stdio.h>

class Character {
private:
    int hp;
    int atk;
    int def;
    int x;
    int y;

public:
    // TODO: inlining the setters/getters
    void setHP(int value);
    void setATK(int value);
    void setDEF(int value);
    
};


#endif /* character_hpp */
