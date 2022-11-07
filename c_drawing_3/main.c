#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

#define WIDTH 400
#define HEIGHT 400

void polygone(int, int);

int main() {
    init_drawing(WIDTH, HEIGHT, 0.1);

    // déplacement avant de démarrer le dessin :
    turn(180,LEFT);
    move(WIDTH/4);
    turn(90,LEFT);
    move(HEIGHT/2-20);
    turn(90,LEFT);
    
    // dessiner :
    polygone(20,13);

    display_drawing();
    return 0;
}

void polygone(int length, int side) {
    int i;
    for (i=0;i<side;i++) {
        draw(length);
        turn(360.0/side,LEFT);
    }
}
