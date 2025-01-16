#include <iostream>
#include <vector>
#include <algorithm>
#include "interval.h" // Включаем наш заголовочный файл

int main() {
	// Пример входных данных
	std::vector<Interval> intervals = {
		{1, 3},
		{2, 4},
		{3, 5},
		{6, 8},
		{7, 9}
	};

	// Сортировка интервалов по начальным точкам
	std::sort(intervals.begin(), intervals.end(), compareIntervals);

	// Вызов алгоритма полного перебора
	std::vector<Interval> result = ExhaustiveScheduling(intervals);

	// Вывод результата
	std::cout << "Максимальный набор непересекающихся интервалов:\n";
	for (const Interval& interval : result) {
		std::cout << "[" << interval.start << ", " << interval.end << "]\n";
	}
	
	return 0;
}
