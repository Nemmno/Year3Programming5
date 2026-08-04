#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 15 , b = 40;
    printf("Before swapping:\n A = %d \n B = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping:\n A = %d \n B = %d\n", a, b);
}