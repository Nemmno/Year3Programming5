#include <stdio.h>

int main(void) {
    int errorCode;
    char errorMessage[50];

    // 1. Get input from user
    printf("Enter Error Code: ");
    scanf("%d", &errorCode);
    printf("Enter Error Message (no spaces): ");
    scanf("%49s", errorMessage);

    // 2. Open log.txt in overwrite mode ("w")
    FILE *fp = fopen("log.txt", "w");

    // 3. Check if file opened successfully
    if (fp == NULL) {
        printf("File open failed.\n");
        return 1;
    }

    // 4. Write formatted log entry: [ERROR CODE]: Message
    fprintf(fp, "[%d]: %s\n", errorCode, errorMessage);

    // 5. Close file safely
    fclose(fp);

    return 0;
}