#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

#define WIDTH 400
#define HEIGHT 400

void polygone(int, int);
void line_of_square(int, int);

int main() {
    int tour,i;
    
    init_drawing(WIDTH, HEIGHT, 0.01);

    turn(180,LEFT);
    move(WIDTH/2-50);
    turn(90,RIGHT);
    move(HEIGHT/2-150);
    turn(90,RIGHT);

	for (i=0;i<5;i++) {
    	line_of_square(15,20);
    	turn(144,RIGHT);
	}

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

void line_of_square(int number, int length) {
    int i;
    
    for (i=0;i<number;i++) {
        polygone(length,4);
        draw(length);   
    }
}
