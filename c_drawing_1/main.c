#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

#define WIDTH 150
#define HEIGHT 150

int main() {
    int i;
    
    init_drawing(WIDTH, HEIGHT, 0.5);
    
    // déplacement avant de démarrer le dessin :
    turn(180,LEFT);
    move(WIDTH/2-20);
    turn(90,LEFT);
    move(HEIGHT/2-20);
    turn(90,LEFT);

    // dessiner :
    for (i=0;i<4;i++) {
        draw(110);
        turn(90,LEFT);
    }

    display_drawing();
    return 0;
}
