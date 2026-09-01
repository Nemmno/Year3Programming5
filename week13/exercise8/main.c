#include <stdio.h>
#include "phys.h"

int main(void) {
    // ส่งค่า 9.0 และ 5.0 เพื่อคำนวณ 9 * 5 = 45.00
    float result = calculateForce(9.0, 5.0);
    printf("Result: %.2f\n", result);
    
    return 0;
}