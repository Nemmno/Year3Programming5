#include <stdio.h>
struct Student {
    char firstName[15];
    char lastName[15];
    char id[9];
    int age;
};

int main() {
    struct Student target = {"Tung","Nilchan","57070397",20};

    printf("Original %s %s,ID: %s,Age: %d\n", target.firstName, target.lastName, target.id, target.age);
    struct Student *p_st = &target; // Pointer to the struct Student
    printf("Enter new ID(max 8 characters): ");
    scanf("%8s", p_st->id); // Read new ID into the struct via pointer
    printf("Enter new Age: ");
    scanf("%d", &p_st->age); // Read new Age into the struct via pointer
    
    printf("Updated %s %s\nID: %s\nAge: %d\n", (*p_st).firstName, (*p_st).lastName, (*p_st).id, (*p_st).age);
    /*
    printf("(*pointer_structure_var).member\n");
    printf("p_st has firstName: %s ,lastName: %s ,id: %s ,age: %d\n",
            (*p_st).firstName, (*p_st).lastName, (*p_st).id, (*p_st).age);

    printf("pointer_structure_var->member\n");
    printf("p_st has firstName: %s ,lastName: %s ,id: %s ,age: %d\n",
            p_st->firstName, p_st->lastName, p_st->id, p_st->age);
    */
    return 0;
}