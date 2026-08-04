#include <stdio.h>
void findLargest(int *arr,int size,int **largestPtr)
{
    *largestPtr = arr; // Initialize largestPtr to point to the first element of arr
    for(int i = 1; i < size; i++){
        if(*(arr + i) > **largestPtr){
            *largestPtr = (arr + i); // Update largestPtr to point to the new largest element
        }
    }
}

int main()
{
    int arr[5] = {18,7,42,13,25};
    int *largest; // Pointer to hold the address of the largest element

    findLargest(arr, 5, &largest); // Pass the address of largestPtr to findLargest

    printf("Largest Value = %d\n", *largest); // Dereference largestPtr to get the largest element
    printf("Index = %ld\n", largest - arr); // Calculate the index of the largest element by subtracting the base address of arr from largestPtr

    return 0;
}