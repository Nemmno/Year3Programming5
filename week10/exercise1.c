#include <stdio.h>
int main()
{
    int arr[6] = {15, 22, 8, 31, 17, 40};
    int *ptr = arr; // Initialize ptr to point to the first element of arr
    for (int i = 0; i < 6; i++)
    {
        printf("Address of arr[%d]: %p\n", i, (void*)(ptr + i)); // Print the address of each element using pointer arithmetic
    }
    return 0;
}