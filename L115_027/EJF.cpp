/*Гамбург Алиса. Данный файл содержит все исходники, содержащие объявление функций 
из программы EarliestJobFirst*/
#include "EJF.h"
#include <algorithm>

std::vector<int> earliestJobFirst(std::vector<Interval>& intervals) {
    std::sort(intervals.begin(), intervals.end(), [](const Interval& a, const Interval& b) {
        return a.start < b.start;
    });

    std::vector<int> result;
    if (!intervals.empty()) {
      result.push_back(intervals[0].index);
      int lastEnd = intervals[0].end;
      for (size_t i = 1; i < intervals.size(); ++i) {
          if (intervals[i].start >= lastEnd) {
              result.push_back(intervals[i].index);
              lastEnd = intervals[i].end;
          }
      }
    }
    return result;
}

