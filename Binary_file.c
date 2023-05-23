#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char ownerName[100];
    char chipNumber[10];
    float price;
} Patient;

void print_patients_with_price(float price) {
    FILE* file = fopen("animalsBin.bin", "rb");
    if (!file) {
        printf("Error opening file!\n");
        return;
    }
    Patient patient;
    while (fread(&patient, sizeof(Patient), 1, file) == 1) {
        if (patient.price >= price) {
            printf("Bin OwnerName: %s\n", patient.ownerName);
            printf("Bin Chip: %s\n", patient.chipNumber);
            printf("Bin Price: %.2f\n", patient.price);
            printf("----------\n");
        }
    }
    fclose(file);
}

int main() {
    float price;
    printf("Enter the minimum price for a check-up: ");
    scanf("%f", &price);
    print_patients_with_price(price);
    return 0;
}
