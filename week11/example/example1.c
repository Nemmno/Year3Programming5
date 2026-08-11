#include<stdio.h>
#include<stdlib.h>

int main(void){
    int *ptr = malloc(sizeof(int)); // Dynamically allocate memory for an integer
    if(ptr == NULL) { // Check if memory allocation was successful
        return 1; // Exit the program with an error code
    }
    *ptr = 100; // Assign the value 100 to the allocated memory
    printf("Value stored in heap: %d\n", *ptr);
    free(ptr); // Deallocate the memory
    return 0;
}