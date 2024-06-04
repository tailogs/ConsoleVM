// map.c
#include <stdbool.h>
#include <stdio.h>
#include <math.h>
#include "map.h"

char map[SIZE_H][SIZE_W];

bool setPixel(int h, int w, char c) {
    if ((h < 0 || h >= SIZE_H) || (w < 0 || w >= SIZE_W)) {
        return false;
    }
    map[h][w] = c;
    return true;
}

void setPixels(char symbol) {
    for (int h = 0; h < SIZE_H; h++) {
        for (int w = 0; w < SIZE_W; w++) {
            map[h][w] = symbol;
        }
    }
}

void printPixels() {
    // Вывод верхней границы карты
    printf("+");
    for (int w = 0; w < SIZE_W; w++) {
        printf("-");
    }
    printf("+\n");

    // Вывод карты с левой и правой границей
    for (int h = 0; h < SIZE_H; h++) {
        printf("|"); // Левая граница карты
        for (int w = 0; w < SIZE_W; w++) {
            printf("%c", map[h][w]);
        }
        printf("|\n"); // Правая граница карты
    }

    // Вывод нижней границы карты
    printf("+");
    for (int w = 0; w < SIZE_W; w++) {
        printf("-");
    }
    printf("+\n");
}

bool setLine(int h, int w, int to_h, int to_w, char c) {
    // Установить начальную точку
    if (!setPixel(h, w, c)) {
        return false;
    }

    // Вычисление разниц координат
    int dx = abs(to_w - w);
    int dy = abs(to_h - h);

    // Определение направления шага
    int sx = (to_w > w) ? 1 : -1;
    int sy = (to_h > h) ? 1 : -1;

    // Инициализация ошибки
    int err = dx - dy;

    // Цикл для установки пикселей
    while (true) {
        // Установить текущую точку
        if (!setPixel(h, w, c)) {
            return false;
        }

        // Проверка на достижение конечной точки
        if (h == to_h && w == to_w) {
            break;
        }

        // Вычисление двойной ошибки
        int e2 = 2 * err;

        // Обновление ошибки и координаты x
        if (e2 > -dy) {
            err -= dy;
            w += sx;
        }

        // Обновление ошибки и координаты y
        if (e2 < dx) {
            err += dx;
            h += sy;
        }
    }

    return true;
}