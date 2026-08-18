#include <stdio.h>

typedef struct {
    int id;
    float price;
} Product;

int main() {
    Product item = {501, 19.99};

    printf("Product ID   : %d\n", item.id);
    printf("Product Price: $%.2f\n", item.price);

    return 0;
}