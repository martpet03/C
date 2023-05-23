#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 30
#define CHIP_LEN 7

struct Patient {
    char ownerName[MAX_NAME_LEN + 1];
    char chip[CHIP_LEN + 1];
    double price;
};

void addPatientToFile() {
    struct Patient patient;

    printf("Enter owner name (up to %d characters): ", MAX_NAME_LEN);
    fgets(patient.ownerName, MAX_NAME_LEN + 1, stdin);
    patient.ownerName[strcspn(patient.ownerName, "\n")] = '\0';
    printf("Enter chip number (format A12345B): ");
    fgets(patient.chip, CHIP_LEN + 1, stdin);
    patient.chip[strcspn(patient.chip, "\n")] = '\0';

    printf("Enter price: ");
    scanf("%lf", &patient.price);
    getchar();

    FILE *fp = fopen("animalsText.txt", "a");
    if (fp == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fprintf(fp, "%s,%.2lf\n", patient.ownerName, patient.price);

    fclose(fp);
}
int main() {
    int choice;

    do {
        printf("Choose an option:\n");
        printf("1. Add a patient to the file\n");
        printf("2. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                addPatientToFile();
                break;
            case 2:
                printf("Goodbye!\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
                break;
        }
    } while (choice != 2);

    return 0;
}
