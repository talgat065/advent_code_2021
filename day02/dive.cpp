#include <iostream>
#include <fstream>
#include "dive.h"

int getPosition() {
    int position = 0;
    int depth = 0;
    int aim = 0;

    std::ifstream input("input.txt");

    std::string direction;
    int steps = 0;

    while (input >> direction >> steps) {
        if (direction == "forward") {
            position += steps;
            depth += aim * steps;
        } else if (direction == "up") {
            aim -= steps;
        } else if (direction == "down") {
            aim += steps;
        }
    }

    std::cout << "Position: " << position << std::endl;
    std::cout << "Depth: " << depth << std::endl;
    std::cout << "Aim: " << aim << std::endl;

    return position * depth;
};
