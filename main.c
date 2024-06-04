// main.c
#include "map.h"
#include "examples/hello_world.h"
//#include "examples/game_map_wasd.h"

int main() {
    setPixels(' ');

    if (!hello_world()) {
        return 1;
    }

    printPixels();

    return 0;
}
