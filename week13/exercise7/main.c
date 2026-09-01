#include <stdio.h>
#include "geo.h"

int main(void) {
    struct RECTANGLE rect = {12.50, 4.00};
    printf("Rectangle configured: %.2fx%.2f\n", rect.length, rect.width);
    return 0;
}