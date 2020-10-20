#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

#define WIDTH 200
#define HEIGHT 220

int main() {
    int taille = 100;
    int taille2 = round(sqrt(taille*taille*2));
    int i;
    
    init_drawing(WIDTH, HEIGHT, 0.5);
    
    // déplacement avant de démarrer le dessin :
    turn(180,LEFT);
    move(WIDTH/2-50);
    turn(90,LEFT);
    move(HEIGHT/2-20);
    turn(90,LEFT);
    
    // dessiner :
    turn(90,LEFT);
    draw(taille);
    turn(30,RIGHT);
    draw(taille);
    turn(120,RIGHT);
    draw(taille);
    turn(30,RIGHT);
    draw(taille);
    for (i=0; i<4; i++) {
        if (i==3) {
            turn(135,LEFT);
        } else {
            turn(135,RIGHT);
        }
        if (i%2==0) {
            draw(taille2);
        } else {
            draw(taille);
        }
    }

    display_drawing();
    return 0;
}
