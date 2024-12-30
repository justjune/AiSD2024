#ifndef CP_H
#define CP_H

#include <vector>

struct Point {
    double x, y;
};

double dist(const Point& p1, const Point& p2);

// Объявление функции closestPair
double closestPair(std::vector<Point>& points);

#endif
