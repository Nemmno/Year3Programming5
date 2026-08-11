#include <stdio.h>
#include <stdlib.h>
int main(void){
    int sizeOfarray;
    printf("Enter the size of the array: ");
    scanf("%d", &sizeOfarray);
    int *array = malloc(sizeOfarray * sizeof(int)); // Dynamically allocate memory for an array of integers
    if(array == NULL) { // Check if memory allocation was successful
        return 1; // Exit the program with an error code
    }
    
    printf("Array elements : ");
    for(int i = 0; i < sizeOfarray; i++) {
        array[i] = i * i; // Calculate square of index
        printf("%d ", array[i]); // Print the values stored in the allocated array
    }
    printf("\n");
    free(array); // Deallocate the memory
    return 0;
}