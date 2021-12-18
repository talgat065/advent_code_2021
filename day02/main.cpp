#include "iostream"
#include "fstream"
#include "string"
#include "vector"

using std::string;

int getPosition() {
    int position = 0;
    int depth = 0;

    std::ifstream input("input.txt");

    string direction;
    int steps;

    while (input >> direction >> steps) {
        if (direction == "forward") {
            position += steps;
        } else if (direction == "up") {
            depth -= steps;
        } else if (direction == "down") {
            depth += steps;
        }
    }

    return position * depth;
}


int main() {
    int result = getPosition();
    std::cout << result << std::endl;

    return 0;
}
