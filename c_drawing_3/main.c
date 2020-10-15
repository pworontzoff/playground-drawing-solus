#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

#define WIDTH 400
#define HEIGHT 400

void polygone(int, int);

int main() {
    init_drawing(WIDTH, HEIGHT, 0.5);

    polygone(15,40);

    display_drawing();
    return 0;
}

void polygone(int length, int side) {
    int i;
    for (i=0;i<side;i++) {
        draw(length);
        turn(360/side,LEFT);
    }
}
