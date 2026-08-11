#include <stdio.h>
#include <stdlib.h>
int main(void){
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int *matrix = malloc(rows * cols * sizeof(int)); // Dynamically allocate memory for a 2D array
    if(matrix == NULL) { // Check if memory allocation was successful
        return 1; // Exit the program with an error code
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i * cols + j] = i*cols + j +1; // Assign values to the 2D array
        }
    }
    // Print the 2D array
    printf("----- My Magic grid -----\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d \t", matrix[i * cols + j]);
        }
        printf("\n");
    }
    free(matrix); // Deallocate the memory
    return 0;
}