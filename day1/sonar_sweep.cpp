#include <iostream>
#include <fstream>

int find_increases() {
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

int main () {
    std::cout << find_increases() << std::endl;
}

