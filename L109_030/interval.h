// Мустафина Анна
// заголовочный файл с объявлением структуры Interval (структура для хранения интервалов)

#ifndef INTERVAL_H
#define INTERVAL_H

#include <vector>

struct Interval {
	int start;
	int end;
};

bool compareIntervals(const Interval& a, const Interval& b);

bool isOverlapping(const Interval& a, const Interval& b);

std::vector<Interval> ExhaustiveScheduling(const std::vector<Interval>& intervals);

#endif
