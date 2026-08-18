#include <stdio.h>

struct Student {
    int id;
    float gpa;
};

int main(){
    struct Student student1 = {101,3.75};

    //printf("\nStudent Information:\n");
    printf("Student ID : %d\n", student1.id);
    printf("Student GPA: %.2f\n", student1.gpa);

    return 0;
}