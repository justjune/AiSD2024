// Мустафина Анна
// файл с основной программой

#include <iostream>
#include <vector>
#include <algorithm>
#include "Film.h"

int main() {
    // Пример использования:
    std::vector<Film> films = {
        Film(1, 1, 3),
        Film(2, 2, 5),
        Film(3, 6, 8),
        Film(4, 1, 4),
        Film(5, 7, 10),
        Film(6, 3, 9),
    };

    std::vector<Film> schedule = optimalScheduling(films);

    std::cout << "Оптимальное расписание:" << std::endl;
    for (const auto& film : schedule) {
        std::cout << "Фильм " << film.id << ": " << film.start << " - " << film.end << std::endl;
    }

    return 0;
}
