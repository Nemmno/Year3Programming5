#include <stdio.h>

int main(void) {
    char name[50];
    int score;

    printf("Enter Name to append: ");
    scanf("%s", name);
    printf("Enter Score to append: ");
    scanf("%d", &score);

    // 1 & 2. Append new data entry
    FILE *fp = fopen("scores.dat", "a");
    if (fp == NULL) {
        printf("File open failed.\n");
        return 1;
    }
    fprintf(fp, "%s %d\n", name, score);
    fclose(fp);

    // 3 & 4. Re-open in read mode and parse first entry
    fp = fopen("scores.dat", "r");
    if (fp == NULL) {
        printf("File open failed.\n");
        return 1;
    }

    char read_name[50];
    int read_score;
    fscanf(fp, "%s %d", read_name, &read_score);
    fclose(fp);

    printf("\nFirst Entry in File: Name=%s Score=%d\n", read_name, read_score);

    return 0;
}