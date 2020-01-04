//
//  utils.cpp
//  dungeon
//
//  Created by Haoran Wang on 2020-01-03.
//  Copyright © 2020 Haoran Wang. All rights reserved.
//

#include "utils.hpp"

void Utils::clearScreen() {
    int n;
    for (n = 0; n < 10; ++n) {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    }
}
