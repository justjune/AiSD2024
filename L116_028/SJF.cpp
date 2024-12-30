#include "SJF.h"
#include <algorithm>

std::vector<int> shortestJobFirst(std::vector<Interval> intervals) {
    std::vector<int> result;
    while (!intervals.empty()) {
        auto shortestIt = std::min_element(intervals.begin(), intervals.end(), 
            [](const Interval& a, const Interval& b) {
                return (a.end - a.start) < (b.end - b.start);
            });
        result.push_back(shortestIt->index);
        int end = shortestIt->end;
        intervals.erase(std::remove_if(intervals.begin(), intervals.end(),
            [&](const Interval& i){
               return i.start < end && end > i.start;
            }), intervals.end());
    }
    return result;
}

