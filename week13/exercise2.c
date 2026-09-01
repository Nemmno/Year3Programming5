#include <stdio.h>


struct VEHICLE {
    char brand[10];
    char model[15];
    int crew;
    float price;
};

void registerVehicle(struct VEHICLE* car) {
    printf("Enter brand: ");
    scanf("%9s", car->brand);
    printf("Enter model: ");
    scanf("%14s", car->model);
    printf("Enter crew size: ");
    scanf("%d", &car->crew);
    printf("Enter price: ");
    scanf("%f", &car->price);
}

void applyDiscount(struct VEHICLE* car, float percent) {
    car->price = car->price - (car->price * (percent / 100.0f));
}

void displayVehicle(struct VEHICLE car) {
    printf("--- Vehicle Details ---\n");
    printf("Brand: %s\n", car.brand);
    printf("Model: %s\n", car.model);
    printf("Crew: %d\n", car.crew);
    printf("Price after discount: $%.2f\n", car.price);
}

int main(void) {
    struct VEHICLE myCar;

    registerVehicle(&myCar);
    applyDiscount(&myCar, 15.0f); // ลดราคา 15% ตามตัวอย่างผลลัพธ์ในสไลด์ (2.00 เหลือ 1.70)
    displayVehicle(myCar);

    return 0;
}