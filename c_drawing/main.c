#include <stdio.h>
#include <stdlib.h>
#include "drawing.h"

#define WIDTH 800
#define HEIGHT 600

int main() {
    init_drawing(WIDHT, HEIGHT, 0.25);
    
    display_drawing();
    return 0;
}
