//
//  logger.cpp
//  dungeon
//
//  Created by Haoran Wang on 2020-01-03.
//  Copyright © 2020 Haoran Wang. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <chrono>
#include <ctime>
#include "logger.hpp"

void Logger::write(std::string &&message) {
    std::time_t t = std::time(0);
    
    std::tm* now = std::localtime(&t);
    
    std::ofstream log;
    log.open("log.txt", std::fstream::app);
    
    // write the current time and the message to log
    log << now->tm_year + 1900 << "-"
        << now->tm_mon + 1 << "-"
        << now->tm_mday << " "
        << now->tm_hour << ":"
        << now->tm_min << ":"
        << now->tm_sec << " "
        << message
        << std::endl;
    
    log.close();
}
