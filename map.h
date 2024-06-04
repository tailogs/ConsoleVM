// map.h
#ifndef MAP_H
#define MAP_H

#include <stdbool.h>

#define SIZE_H 40
#define SIZE_W 120

extern char map[SIZE_H][SIZE_W];

bool setPixel(int h, int w, char c);
void setPixels(char symbol);
void printPixels();
bool setLine(int h, int w, int to_h, int to_w, char c);

#endif // MAP_H
