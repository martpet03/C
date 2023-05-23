#include <stdio.h>

#define CHAIR_PRICE 13.99
#define TABLE_PRICE 42.00
#define GLASS_SET_PRICE 5.98
#define PLATE_SET_PRICE 21.02

int main() {
    int num_guests, num_chairs, num_tables, num_glass_sets, num_plate_sets;
    double total_cost, chairs_cost, tables_cost, glass_sets_cost, plate_sets_cost;

    printf("Enter the number of guests: ");
    scanf("%d", &num_guests);

    num_chairs = num_guests;
    num_tables = (num_guests + 7) / 8;
    num_glass_sets = (num_guests * 2 + 5) / 6;
    num_plate_sets = (num_guests + 1) / 2;

    chairs_cost = num_chairs * CHAIR_PRICE;
    tables_cost = num_tables * TABLE_PRICE;
    glass_sets_cost = num_glass_sets * GLASS_SET_PRICE;
    plate_sets_cost = num_plate_sets * PLATE_SET_PRICE;

    total_cost = chairs_cost + tables_cost + glass_sets_cost + plate_sets_cost;

    printf("Total cost so far: %.2f BGN\n", total_cost);
    printf("Still need to buy:\n");
    printf("%d chairs\n", num_chairs);
    printf("%d tables\n", num_tables);
    printf("%d glass sets\n", num_glass_sets);
    printf("%d plate sets\n", num_plate_sets);

    return 0;
}
