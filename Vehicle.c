#include <stdio.h>
#include <string.h>

struct Vehicle {
    float price;
    char model[50];
    int year;
};

struct Car {
    struct Vehicle base;
    float price_car;
    char model_car[50];
    int year_car;
};

struct Motorcycle {
    struct Vehicle base;
    float price_motorcycle;
    char model_motorcycle[50];
    int year_motorcycle;
};

struct Boat {
    struct Vehicle base;
    float price_car;
    char model_car[50];
    int year_car;
};

struct Airplane {
    struct Vehicle base;
    float price_airplane;
    char model_airplane[50];
    int year_airplane;
};

int main() {
    struct Vehicle car, motorcycle, boat, airplane;

    printf("Enter model, year, and price for a car:\n");
    scanf("%s %d %f", car.model, &car.year, &car.price);

    printf("Enter model, year, and price for a motorcycle:\n");
    scanf("%s %d %f", motorcycle.model, &motorcycle.year, &motorcycle.price);

    printf("Enter model, year, and price for a boat:\n");
    scanf("%s %d %f", boat.model, &boat.year, &boat.price);

    printf("Enter model, year, and price for an airplane:\n");
    scanf("%s %d %f", airplane.model, &airplane.year, &airplane.price);

    if (car.year < motorcycle.year && car.year < boat.year && car.year < airplane.year) {
        printf("Car is the oldest vehicle.\n");
    }
    else if (motorcycle.year < car.year && motorcycle.year < boat.year && motorcycle.year < airplane.year) {
        printf("Motorcycle is the oldest vehicle.\n");
    }
    else if (boat.year < car.year && boat.year < motorcycle.year && boat.year < airplane.year) {
        printf("Boat is the oldest vehicle.\n");
    }
    else {
        printf("Airplane is the oldest vehicle.\n");
    }

    return 0;
}
