#include <stdio.h>

int main() {
    float bus = 0;
    float taxi = 0;
    float money = 0;
    int selection = 0;

    printf("Enter price of bus ticket: ");
    scanf("%f", &bus);

    printf("Enter price of taxi: ");
    scanf("%f", &taxi);

    printf("How much money you have: ");
    scanf("%f", &money);

    while (1) {
        if (money < bus && money < taxi) {
            printf("You have to walk. Bye.");
            break;
        }
        else {
            printf("Do you want to take\n");
            printf("1) Bus\n");
            printf("2) Taxi\n");
            printf("Enter your selection: ");
            scanf("%d", &selection);

            if (selection == 1) {
                printf("You chose bus.\n");
                money = money - bus;
                printf("Money left %f\n", money);
            }
            if (selection == 2) {
                printf("You chose taxi.\n");
                money = money - taxi;
                printf("Money left %f\n", money);
            }
        }
    }

    return 0;
}
 