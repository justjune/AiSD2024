/*Гамбург Алиса. Заголовочный файл для программы ShortestJobFirst*/
#ifndef SJF_H
#define SJF_H

#include <vector>

// Определение структуры Interval
struct Interval {
    int start;
    int end;
    int index;
};

// Объявление функции shortestJobFirst
std::vector<int> shortestJobFirst(std::vector<Interval> intervals);

#endif

