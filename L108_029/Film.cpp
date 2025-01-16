#include "Film.h"
#include <algorithm>

Film::Film(int id, int start, int end) : id(id), start(start), end(end) {}

// Функция для сравнения фильмов по времени окончания съемок
bool compareFilmsByEnd(const Film& a, const Film& b) {
    return a.end < b.end;
}

// Функция для проверки пересечения съемок двух фильмов
bool doFilmsOverlap(const Film& a, const Film& b) {
    return !(a.end <= b.start || b.end <= a.start);
} 

// Функция для выбора оптимального расписания
std::vector<Film> optimalScheduling(std::vector<Film> films) {
    std::vector<Film> schedule;

    while (!films.empty()) {
        // 1. Выбираем фильм с самым ранним окончанием съемок
        std::sort(films.begin(), films.end(), compareFilmsByEnd);
        Film selectedFilm = films[0];
        schedule.push_back(selectedFilm);

        // 2. Удаляем выбранный фильм и все пересекающиеся с ним
        std::vector<Film> remainingFilms;
        for(size_t i = 1; i < films.size(); ++i){
            if(!doFilmsOverlap(selectedFilm, films[i])){
                remainingFilms.push_back(films[i]);
            }
        }
        films = remainingFilms;
    }
    
    return schedule;
}
