// hello_world.c
#include <stdbool.h>
#include "../map.h"
#include "hello_world.h"

bool hello_world() {
    char symbol_H = 'H';
    char symbol_E = 'E';
    char symbol_L = 'L';
    char symbol_O = 'O';
    char symbol_W = 'W';
    char symbol_R = 'R';
    char symbol_D = 'D';
    char symbol_EXCLAMATION = '!';

    // H
    if (!setPixel(1, 2, symbol_H)) return false;
    if (!setPixel(2, 2, symbol_H)) return false;
    if (!setPixel(3, 2, symbol_H)) return false;
    if (!setPixel(4, 2, symbol_H)) return false;
    if (!setPixel(5, 2, symbol_H)) return false;
    if (!setPixel(3, 3, symbol_H)) return false;
    if (!setPixel(3, 4, symbol_H)) return false;
    if (!setPixel(3, 5, symbol_H)) return false;
    if (!setPixel(1, 6, symbol_H)) return false;
    if (!setPixel(2, 6, symbol_H)) return false;
    if (!setPixel(3, 6, symbol_H)) return false;
    if (!setPixel(4, 6, symbol_H)) return false;
    if (!setPixel(5, 6, symbol_H)) return false;

    // E
    if (!setPixel(1, 10, symbol_E)) return false;
    if (!setPixel(2, 10, symbol_E)) return false;
    if (!setPixel(3, 10, symbol_E)) return false;
    if (!setPixel(4, 10, symbol_E)) return false;
    if (!setPixel(5, 10, symbol_E)) return false;
    if (!setPixel(1, 11, symbol_E)) return false;
    if (!setPixel(1, 12, symbol_E)) return false;
    if (!setPixel(1, 13, symbol_E)) return false;
    if (!setPixel(1, 14, symbol_E)) return false;
    if (!setPixel(3, 11, symbol_E)) return false;
    if (!setPixel(3, 12, symbol_E)) return false;
    if (!setPixel(3, 13, symbol_E)) return false;
    if (!setPixel(3, 14, symbol_E)) return false;
    if (!setPixel(5, 11, symbol_E)) return false;
    if (!setPixel(5, 12, symbol_E)) return false;
    if (!setPixel(5, 13, symbol_E)) return false;
    if (!setPixel(5, 14, symbol_E)) return false;

    // L
    if (!setPixel(1, 18, symbol_L)) return false;
    if (!setPixel(2, 18, symbol_L)) return false;
    if (!setPixel(3, 18, symbol_L)) return false;
    if (!setPixel(4, 18, symbol_L)) return false;
    if (!setPixel(5, 18, symbol_L)) return false;
    if (!setPixel(5, 19, symbol_L)) return false;
    if (!setPixel(5, 20, symbol_L)) return false;
    if (!setPixel(5, 21, symbol_L)) return false;
    if (!setPixel(5, 22, symbol_L)) return false;

    // L
    if (!setPixel(1, 26, symbol_L)) return false;
    if (!setPixel(2, 26, symbol_L)) return false;
    if (!setPixel(3, 26, symbol_L)) return false;
    if (!setPixel(4, 26, symbol_L)) return false;
    if (!setPixel(5, 26, symbol_L)) return false;
    if (!setPixel(5, 27, symbol_L)) return false;
    if (!setPixel(5, 28, symbol_L)) return false;
    if (!setPixel(5, 29, symbol_L)) return false;
    if (!setPixel(5, 30, symbol_L)) return false;

    // O
    if (!setPixel(1, 34, symbol_O)) return false;
    if (!setPixel(2, 34, symbol_O)) return false;
    if (!setPixel(3, 34, symbol_O)) return false;
    if (!setPixel(4, 34, symbol_O)) return false;
    if (!setPixel(5, 34, symbol_O)) return false;
    if (!setPixel(1, 35, symbol_O)) return false;
    if (!setPixel(5, 35, symbol_O)) return false;
    if (!setPixel(1, 36, symbol_O)) return false;
    if (!setPixel(5, 36, symbol_O)) return false;
    if (!setPixel(1, 37, symbol_O)) return false;
    if (!setPixel(5, 37, symbol_O)) return false;
    if (!setPixel(1, 38, symbol_O)) return false;
    if (!setPixel(2, 38, symbol_O)) return false;
    if (!setPixel(3, 38, symbol_O)) return false;
    if (!setPixel(4, 38, symbol_O)) return false;
    if (!setPixel(5, 38, symbol_O)) return false;
    
    // W
    if (!setPixel(1, 47, symbol_W)) return false;
    if (!setPixel(2, 47, symbol_W)) return false;
    if (!setPixel(3, 47, symbol_W)) return false;
    if (!setPixel(4, 47, symbol_W)) return false;
    if (!setPixel(5, 47, symbol_W)) return false;
    if (!setPixel(5, 48, symbol_W)) return false;
    if (!setPixel(1, 49, symbol_W)) return false;
    if (!setPixel(1, 49, symbol_W)) return false;
    if (!setPixel(2, 49, symbol_W)) return false;
    if (!setPixel(3, 49, symbol_W)) return false;
    if (!setPixel(4, 49, symbol_W)) return false;
    if (!setPixel(5, 49, symbol_W)) return false;
    if (!setPixel(5, 50, symbol_W)) return false;
    if (!setPixel(1, 51, symbol_W)) return false;
    if (!setPixel(2, 51, symbol_W)) return false;
    if (!setPixel(3, 51, symbol_W)) return false;
    if (!setPixel(4, 51, symbol_W)) return false;
    if (!setPixel(5, 51, symbol_W)) return false;

    // O
    if (!setPixel(1, 55, symbol_O)) return false;
    if (!setPixel(2, 55, symbol_O)) return false;
    if (!setPixel(3, 55, symbol_O)) return false;
    if (!setPixel(4, 55, symbol_O)) return false;
    if (!setPixel(5, 55, symbol_O)) return false;
    if (!setPixel(1, 56, symbol_O)) return false;
    if (!setPixel(5, 56, symbol_O)) return false;
    if (!setPixel(1, 57, symbol_O)) return false;
    if (!setPixel(5, 57, symbol_O)) return false;
    if (!setPixel(1, 58, symbol_O)) return false;
    if (!setPixel(5, 58, symbol_O)) return false;
    if (!setPixel(1, 59, symbol_O)) return false;
    if (!setPixel(2, 59, symbol_O)) return false;
    if (!setPixel(3, 59, symbol_O)) return false;
    if (!setPixel(4, 59, symbol_O)) return false;
    if (!setPixel(5, 59, symbol_O)) return false;
    
    // R
    if (!setPixel(1, 63, symbol_R)) return false;
    if (!setPixel(2, 63, symbol_R)) return false;
    if (!setPixel(3, 63, symbol_R)) return false;
    if (!setPixel(4, 63, symbol_R)) return false;
    if (!setPixel(5, 63, symbol_R)) return false;
    if (!setPixel(1, 64, symbol_R)) return false;
    if (!setPixel(1, 65, symbol_R)) return false;
    if (!setPixel(1, 66, symbol_R)) return false;
    if (!setPixel(4, 66, symbol_R)) return false;
    if (!setPixel(1, 67, symbol_R)) return false;
    if (!setPixel(2, 67, symbol_R)) return false;
    if (!setPixel(3, 64, symbol_R)) return false;
    if (!setPixel(3, 65, symbol_R)) return false;
    if (!setPixel(3, 66, symbol_R)) return false;
    if (!setPixel(3, 67, symbol_R)) return false;
    if (!setPixel(5, 67, symbol_R)) return false;

    // L
    if (!setPixel(1, 71, symbol_L)) return false;
    if (!setPixel(2, 71, symbol_L)) return false;
    if (!setPixel(3, 71, symbol_L)) return false;
    if (!setPixel(4, 71, symbol_L)) return false;
    if (!setPixel(5, 71, symbol_L)) return false;
    if (!setPixel(5, 72, symbol_L)) return false;
    if (!setPixel(5, 73, symbol_L)) return false;
    if (!setPixel(5, 74, symbol_L)) return false;
    if (!setPixel(5, 75, symbol_L)) return false;
    
    // D
    if (!setPixel(1, 79, symbol_D)) return false;
    if (!setPixel(2, 79, symbol_D)) return false;
    if (!setPixel(3, 79, symbol_D)) return false;
    if (!setPixel(4, 79, symbol_D)) return false;
    if (!setPixel(5, 79, symbol_D)) return false;
    if (!setPixel(1, 80, symbol_D)) return false;
    if (!setPixel(5, 80, symbol_D)) return false;
    if (!setPixel(1, 81, symbol_D)) return false;
    if (!setPixel(5, 81, symbol_D)) return false;
    if (!setPixel(2, 82, symbol_D)) return false;
    if (!setPixel(4, 82, symbol_D)) return false;
    if (!setPixel(3, 83, symbol_D)) return false;
    
    // L
    if (!setPixel(1, 87, symbol_EXCLAMATION)) return false;
    if (!setPixel(1, 88, symbol_EXCLAMATION)) return false;
    if (!setPixel(2, 87, symbol_EXCLAMATION)) return false;
    if (!setPixel(2, 88, symbol_EXCLAMATION)) return false;
    if (!setPixel(3, 87, symbol_EXCLAMATION)) return false;
    if (!setPixel(3, 88, symbol_EXCLAMATION)) return false;
    if (!setPixel(5, 87, symbol_EXCLAMATION)) return false;
    if (!setPixel(5, 88, symbol_EXCLAMATION)) return false;

    return true;
}
