#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

#define WIDTH 800
#define HEIGHT 600

int main() {
    int i;
    
    init_drawing(WIDTH, HEIGHT, 0.5);

    for (i=0;i<4;i++) {
        draw(50);
        turn(90,LEFT);
    }

    display_drawing();
    return 0;
}
