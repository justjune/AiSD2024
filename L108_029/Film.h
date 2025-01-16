// Мустафина Анна
//заголовочный файл с объявлением структуры Film (структура для хранения информации о фильме)

#ifndef FILM_H
#define FILM_H
#include <vector>

struct Film {
    int id;       // Идентификатор фильма
    int start;    // Время начала съемок
    int end;      // Время окончания съемок

    Film(int id, int start, int end);
};

// Функция для сравнения фильмов по времени окончания съемок
bool compareFilmsByEnd(const Film& a, const Film& b);

// Функция для проверки пересечения съемок двух фильмов
bool doFilmsOverlap(const Film& a, const Film& b);

// Функция для выбора оптимального расписания
std::vector<Film> optimalScheduling(std::vector<Film> films);

#endif
