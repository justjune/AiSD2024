// Мустафина Анна
// pеализация функций intersects (функция для проверки пересечения интервалов) и ExhaustiveScheduling
// (функция для нахождения наибольшего непересекающегося подмножества интервалов методом полного перебора)

#include "interval.h"
#include <vector>
#include <algorithm>

// Функция проверки пересечения интервалов
bool intersects(const Interval& a, const Interval& b) {
    return std::max(a.start, b.start)<std::min(a.end, b.end);
}

std::vector<Interval> ExhaustiveScheduling(const std::vector<Interval>& intervals) {
    int n = intervals.size();
    int j = 0;
    std::vector<Interval> smax;

    for (int i = 0; i < (1 << n); ++i) { // Перебор всех 2^n подмножеств
        std::vector<Interval> subset;
        for (int k = 0; k < n; ++k) {
            if ((i >> k) & 1) { // Проверка k-го бита в i
                subset.push_back(intervals[k]);
            }
        }

        bool nonIntersecting = true;
        for (size_t k = 0; k < subset.size(); ++k) {
            for (size_t l = k + 1; l < subset.size(); ++l) {
                if (intersects(subset[k], subset[l])) {
                    nonIntersecting = false;
                    break;
                }
            }
            if (!nonIntersecting) break;
        }

        if (nonIntersecting && subset.size() > j) {
            j = subset.size();
            smax = subset;
        }
    }
    return smax;
}

