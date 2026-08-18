#include <stdio.h>

typedef struct {
    int x;
    int y;
} Point;

int main(){
    Point p1 = {5, 10};

    /*
    printf("P1 Point Coordinates:\n");
    printf("X: %d\n", p1.x);
    printf("Y: %d\n", p1.y);
    */
    Point p2 = p1; // Copying p1 to p2
    printf("Coordinates of P2:\n");
    printf("X: %d\n", p2.x);
    printf("Y: %d\n", p2.y);

    return 0;
}