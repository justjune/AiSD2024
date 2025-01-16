// Мустафина Анна
// заголовочный файл с объявлением структуры Interval (структура для хранения интервалов)

#ifndef INTERVAL_H
#define INTERVAL_H

struct Interval {
    int start;
    int end;
};

bool intersects(const Interval& a, const Interval& b);

#endif
