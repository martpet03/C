#include <stdio.h>
#include <stdlib.h>

int main() {
    int size, i;
    int *arr;
    int sum = 0, max, min, evenSum = 0;

    printf("Golemina na masiva: ");
    scanf("%d", &size);


    arr = (int*) malloc(size * sizeof(int));


    printf("Vuvedete chislata v masiva:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    printf("Masiva e: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sumata e: %d\n", sum);


    max = arr[0];
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Nai-golqmoto chislo e: %d\n", max);


    min = arr[0];
    for (i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        }
    }
    printf("Nai-malkoto chislo e: %d\n", min);
    printf("Sumata na chetnite chisla e: %d\n", evenSum);


    free(arr);

    return 0;
}
