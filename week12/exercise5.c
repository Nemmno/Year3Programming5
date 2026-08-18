#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Order {
    int orderId;
    struct Date deliveryDate;
};

int main() {
    struct Order order1 = {9876, {17, 8, 2026}};

    printf("Order ID: %d\n", order1.orderId);
    printf("Delivery Date: %02d/%02d/%04d\n", order1.deliveryDate.day, order1.deliveryDate.month, order1.deliveryDate.year);

    return 0;
}