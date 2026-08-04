#include <stdio.h>
int main(){
    int arr[8] = {12,7,25,19,4,30,18,9};
    int *ptr = arr,sum = 0,num_even = 0; // Initialize ptr to point to the first element of arr
    int minimum = *ptr; // Initialize minimum with the first element
    for(int i = 0; i < 8; i++){
        sum += *(ptr + i); // Calculate the sum of the elements using pointer arithmetic
        if(*(ptr + i) < minimum){
            minimum = *(ptr + i);
        }
        if(*(ptr + i) % 2 == 0){
            num_even++;
        }
    }
    printf("Sum = %d\n", sum);
    printf("Minimum = %d\n", minimum);
    printf("Even Numbers = %d\n", num_even);
    return 0;
}