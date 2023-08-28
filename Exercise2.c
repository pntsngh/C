#include <stdio.h>

int main() {
    float taxpercent = 0;
    int limit = 0;
    float surtax = 0;
    float months[12];
    float tax[12];
    float totalSalary = 0;

    printf("Enter tax rate: ");
    scanf("%f", &taxpercent);

    printf("Enter income limit: ");
    scanf("%d", &limit);

    printf("Enter tax rate for income over the limit: ");
    scanf("%f", &surtax);

    for (int i = 0; i < 12; ++i) {
        printf("Enter income for month %d: \n", i + 1);
        scanf("%f", &months[i]);
        tax[i] = months[i] * taxpercent / 100;
        totalSalary = totalSalary + months[i];
        if (totalSalary >= limit) {
            tax[i] = months[i] * surtax / 100;
        }

    }

    printf("month    income     tax\n");
    for (int i = 0; i < 12; ++i) {
        printf(" %d       %.2f     %.2f\n", i, months[i], tax[i]);

    }

    return 0;
}
