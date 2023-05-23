#include <stdio.h>

int string_length(char str[]) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {

    }
    return i;
}

int main() {
    char str[100];
    printf("Vuvedete niz: ");
    scanf("%s", str);
    printf("Dulzhinata na niza \"%s\" e %d.\n", str, string_length(str));
    return 0;
}
