#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

#define WIDTH 400
#define HEIGHT 400

void polygone(int, int);
void flower(int, int);

int main() {
    init_drawing(WIDTH, HEIGHT, 0.1);
    
    // déplacement avant de démarrer le dessin :
    turn(180,LEFT);
    move(WIDTH/2-50);
    turn(90,RIGHT);
    move(HEIGHT/2-150);
    turn(90,RIGHT);

    // dessiner :
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
