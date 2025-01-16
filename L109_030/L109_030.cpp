#include "interval.h"
#include <algorithm>
#include <vector>

// Сравнивает два интервала по их начальным точкам
bool compareIntervals(const Interval& a, const Interval& b) {
	return a.start < b.start;
}

// Проверяет, пересекаются ли два интервала
bool isOverlapping(const Interval& a, const Interval& b) {
	return (a.start < b.end && b.start < a.end);
}

// Алгоритм полного перебора для поиска максимального набора непересекающихся интервалов
std::vector<Interval> ExhaustiveScheduling(const std::vector<Interval>& intervals) {
	int n = intervals.size();
	std::vector<Interval> bestSet;
	int bestSize = 0;

  // Проходим по всем 2^n подмножествам
	for (int i = 0; i < (1 << n); i++) {
		std::vector<Interval> currentSet;
    // Проверяем каждый интервал, включен ли он в текущее подмножество
		for (int j = 0; j < n; j++) {
		if (i & (1 << j)) {
			currentSet.push_back(intervals[j]);
			}
		}
    // Проверяем, пересекаются ли интервалы в текущем подмножестве
    bool isNonOverlapping = true;
    for (int j = 0; j < currentSet.size(); j++) {
		for (int k = j + 1; k < currentSet.size(); k++) {
			if (isOverlapping(currentSet[j], currentSet[k])) {
				isNonOverlapping = false;
				break;
			}
		}
		if (!isNonOverlapping) {
			break;
		}
    }
    // Обновляем максимальный набор, если текущий набор не пересекается и больше по размеру
    if (isNonOverlapping && currentSet.size() > bestSize) {
		bestSet = currentSet;
		bestSize = currentSet.size();
		}
	}
	return bestSet;
}
