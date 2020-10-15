#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

#define WIDTH 200
#define HEIGHT 220

int main() {
    int taille = 100;
    int taille2 = round(sqrt(taille*taille*2));
    
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
    turn(135,RIGHT);
    draw(taille2);
    turn(135,RIGHT);
    draw(taille);
    turn(135,RIGHT);
    draw(taille2);
    turn(135,LEFT);
    draw(taille);

    display_drawing();
    return 0;
}
