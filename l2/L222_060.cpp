//Садрисламов Реваль ПМ-201
#include <iostream>
#include <cstdlib>
#include <ctime>

void customSort(int array[], int size);

int main() {
    int arraySize;

    // Запрос размера массива у пользователя
    std::cout << "Enter the size of the array: ";
    std::cin >> arraySize;

    int* numbers = new int[arraySize];

    // Запрос данных массива у пользователя или генерация случайных
    std::cout << "Do you want to enter the items manually? (1 - Yes, 0 - No): ";
    int userChoice;
    std::cin >> userChoice;

    if (userChoice == 1) {
        std::cout << "Enter " << arraySize << " elements: ";
        for (int i = 0; i < arraySize; ++i) {
            std::cin >> numbers[i];
        }
    } else {
        std::srand(static_cast<unsigned>(std::time(0)));
        for (int i = 0; i < arraySize; ++i) {
            numbers[i] = std::rand() % 100;
        }
        std::cout << "Randomly generated array: ";
        for (int i = 0; i < arraySize; ++i) {
            std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;
    }

    // Сортировка массива
    customSort(numbers, arraySize);

    // Вывод отсортированного массива
    std::cout << "Sorted array: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    delete[] numbers; // Освобождение памяти
    return 0;
}

