#include <stdio.h>
struct Item{
    int id;
    char name[20];
    int quantity;
};
void initializeInventory(struct Item* arr, int size){
    for(int i = 0; i < 3; i++){
        printf("Enter details for item %d:\n", i + 1);
        scanf("%d %s %d", &(arr+i)->id, (arr+i)->name, &(arr+i)->quantity);
    }
    //printf("Inventory initialized successfully.\n");
}

//find most quantity item
struct Item* findMostStocked(struct Item *arr, int size, int id){
    //printf("Finding item with most quantity...\n");
    struct Item* mostStocked = arr; // Initialize with the first item
    for(int i = 0; i < size; i++)
    {
        if ((arr+i)->quantity > mostStocked->quantity)
        {
            mostStocked = (arr+i);
        }
    }
    return mostStocked;
    //printf("Item with most quantity: ID: %d, Name: %s, Quantity: %d\n", (arr+id)->id, (arr+id)->name, (arr+id)->quantity);
}
int main(){
    struct Item myItem[3];
    initializeInventory(myItem, 3);
    struct Item* output = findMostStocked(myItem, 3, 0);
    printf("Item with most quantity: ID: %d, Name: %s, Quantity: %d\n", output->id, output->name, output->quantity);
    return 0;
}