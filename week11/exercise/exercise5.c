#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arraySize,targetNumber;
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);
    int *array = malloc(arraySize * sizeof(int));
    if(array == NULL) { // Check if memory allocation was successful
        return 1; // Exit the program with an error code
    }
    for (int i = 0; i < arraySize; i++) {
        printf("Enter value for array[%d]: ", i);
        scanf("%d", array + i); // Read values into the allocated array
    }
    printf("Enter the target number to search: ");
    scanf("%d", &targetNumber);
    
    int found = 0,Sum = 0; // Flag to indicate if the target number is found
    for (int i = 0; i < arraySize; i++) {
        if (*(array + i) == targetNumber) { // Check if the current element matches the target number
            found++;
        }
        Sum += *(array + i); // Add the value to sum for later calculation
    }
    //printf("Sum of all numbers: %d\n", Sum); // Print the sum of all found numbers
    double average = (double)Sum / arraySize; // Calculate the average of the found numbers
    printf("Target number %d found %d time(s)\n", targetNumber, found);
    printf("Average of all numbers: %.2f\n", average);

    free(array); // Deallocate the memory
    return 0;
}