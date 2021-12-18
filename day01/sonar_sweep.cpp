#pragma once

#include <iostream>
#include <fstream>

int find_increases1() {
    std::ifstream input("input.txt");

    int line;
    int result = 0;
    int previous_line = 0;

    while (input >> line) {
        if (line > previous_line) {
            result++;
        }

        previous_line = line;
    }

    return result - 1;
}

int main2 () {
    std::cout << find_increases1() << std::endl;
}

