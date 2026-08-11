#include <stdio.h>
#include <stdlib.h>
int* getScore(){
    int *res = malloc(3 * sizeof(int));
    if(res == NULL) {
        return NULL;
    }
    res[0] = 85;
    res[1] = 90;
    res[2] = 95;
    return res;
}
int main(void){
    int *scores = getScore();
    if(scores != NULL) {
        printf("score : ");
        for(int i = 0; i < 3; i++) {
            if(i != 2) {
                printf("%d, ", scores[i]);
            } 
            else {
                printf("%d", scores[i]);
            }
        }
        printf("\n");
        free(scores);
    }
    return 0;
}