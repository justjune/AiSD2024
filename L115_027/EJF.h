#ifndef EJF_H
#define EJF_H

#include <vector>

// Определение структуры Interval
struct Interval {
    int start;
    int end;
    int index;
};

// Объявление функции earliestJobFirst
std::vector<int> earliestJobFirst(std::vector<Interval>& intervals);

#endif

