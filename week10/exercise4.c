#include <stdio.h>
int secodeLargest(int *arr,int size){
    int largest = *arr;
    int secondLargest = *arr;
    for(int i = 0; i < size; i++){
        if(*(arr + i) > largest){
            secondLargest = largest;
            largest = *(arr + i);
        } else if(*(arr + i) > secondLargest && *(arr + i) != largest){
            secondLargest = *(arr + i);
        }
    }
    return secondLargest;
}
int main(){
    int arr[5] = {8, 15, 21, 5, 17};
    int secondLargest = secodeLargest(arr, 5);
    printf("Second Largest = %d\n", secondLargest);
    return 0;
}