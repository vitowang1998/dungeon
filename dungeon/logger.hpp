//
//  logger.hpp
//  dungeon
//
//  Created by Haoran Wang on 2020-01-03.
//  Copyright © 2020 Haoran Wang. All rights reserved.
//

#ifndef logger_hpp
#define logger_hpp

#include <stdio.h>

class Logger {
public:
    void write(std::string &&message);
};


#endif /* logger_hpp */
