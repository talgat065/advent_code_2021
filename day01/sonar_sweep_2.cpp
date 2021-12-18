#include <iostream>
#include <vector>
#include <fstream>

#pragma once

int find_increases() {
    std::ifstream input("input.txt");

    std::vector<int> lines;

    int line;
    while (input >> line) {
        lines.push_back(line);
    }

    int result = 0;
    int prev_three_measurement_sum = 0;

    for (std::size_t i = 0; i != lines.size(); ++i) {
        int three_measurement_sum = 0;

        for (int j = i; j < i + 2; ++j) {
            three_measurement_sum += lines[j];
        }

        if (three_measurement_sum > prev_three_measurement_sum) {
            result++;
        }

        prev_three_measurement_sum = three_measurement_sum;
    }

    return result - 1;
}

int main1 () {
    std::cout << find_increases() << std::endl;
}
