#include <stdio.h>
void swapPointers(int **p1, int **p2){
    int *temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(){
    int a = 10, b = 50;
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("Before\n *ptr1 = %d \n *ptr2 = %d\n", *ptr1, *ptr2);
    swapPointers(&ptr1, &ptr2);
    printf("After\n *ptr1 = %d \n *ptr2 = %d\n", *ptr1, *ptr2);
    return 0;
}