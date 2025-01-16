// Мустафина Анна
// файл с функцией main для тестирования

#include <iostream>
#include <vector>
#include <algorithm>
#include "interval.h"

std::vector<Interval> ExhaustiveScheduling(const std::vector<Interval>& intervals);

int main() {
    std::vector<Interval> intervals = {{1, 3}, {2, 4}, {5, 7}, {6, 8}, {9, 11}};
    std::vector<Interval> result = ExhaustiveScheduling(intervals);

    std::cout << "Наибольшее непересекающееся подмножество:" << std::endl;
    for (const auto& interval : result) {
        std::cout << "[" << interval.start << ", " << interval.end << "] ";
    }
    std::cout << std::endl;

    return 0;
}
