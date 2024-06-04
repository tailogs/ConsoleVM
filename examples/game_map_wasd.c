// game_map_wasd.c
#include <stdio.h>
#include <stdbool.h>
#include "../map.h"

#define PLAYER_SYMBOL '@'

// Координаты игрока
int player_h = 0;
int player_w = 0;

// Функция для инициализации игрока на карте
void initPlayer(int start_h, int start_w) {
    player_h = start_h;
    player_w = start_w;
    setPixel(player_h, player_w, PLAYER_SYMBOL);
}

// Функция для перемещения игрока
bool movePlayer(char direction) {
    int new_h = player_h;
    int new_w = player_w;

    // Определение нового положения в зависимости от направления
    switch (direction) {
        case 'w': new_h--; break; // Вверх
        case 'a': new_w--; break; // Влево
        case 's': new_h++; break; // Вниз
        case 'd': new_w++; break; // Вправо
        default: return false;
    }

    // Проверка на границы карты
    if (new_h < 0 || new_h >= SIZE_H || new_w < 0 || new_w >= SIZE_W) {
        return false;
    }

    // Перемещение игрока
    setPixel(player_h, player_w, ' '); // Очистка предыдущего положения
    player_h = new_h;
    player_w = new_w;
    setPixel(player_h, player_w, PLAYER_SYMBOL);

    return true;
}

// Функция для обработки ввода пользователя
void handleInput() {
    char input;
    while ((input = getchar()) != 'q') { // q для выхода
        if (movePlayer(input)) {
            printPixels();
        }
    }
}
