#include <stdio.h>
#include <string.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Order {
    int orderId;
    struct Date deliveryDate;
};

struct Task{
    char name[50];
    struct Date deadline;
};


int main() {
    struct Task Assignment[2] = {{"Math Assignment", {20, 8, 2026}},
                                 {"Physics Lab Report", {25, 8, 2026}}};

    for(int i = 0; i < 2; i++){
        if (strlen(Assignment[i].name) > 50) {
            printf("Error: Task name exceeds maximum length of 50 characters.\n");
            return 1; // Exit with error code
        }
        else{
        printf("Task: %s | ", Assignment[i].name);
        printf("Deadline: %02d/%02d/%04d\n", Assignment[i].deadline.day, Assignment[i].deadline.month, Assignment[i].deadline.year);}
    }

    return 0;
}