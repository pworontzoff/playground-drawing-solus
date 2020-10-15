#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

#define WIDTH 800
#define HEIGHT 600

void polygone(int, int);
void flower(int, int);

int main() {
    init_drawing(WIDTH, HEIGHT, 0.5);

    flower(50,10);

    display_drawing();
    return 0;
}

void flower(int length, int side) {
    int i;
    for (i=1;i<=side;i++) {
        polygone(length,5);
        draw(length);
        turn(360/side,RIGHT);
    }
}

void polygone(int length, int side) {
    int i;
    for (i=0;i<side;i++) {
        draw(length);
        turn(360/side,LEFT);
    }
}
