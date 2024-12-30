#ifndef TSP_H
#define TSP_H

#include <vector>

struct Point {
    double x, y;
    bool operator<(const Point& other) const;
};

double distance(const Point& p1, const Point& p2);
double calculateTotalDistance(const std::vector<Point>& path);
std::vector<Point> solveTSP(std::vector<Point> points);

#endif