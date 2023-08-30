#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int print_menu();
int roll_dice(int number);

int main() {
    while (1) {
        int printMenu = print_menu();

        if (printMenu == 1) {
            int dice = roll_dice(6);
            printf("You got %d!\n", dice);
            printf("\n");
        } else if (printMenu == 2) {
            int dice = roll_dice(10);
            printf("You got %d!\n", dice);
            printf("\n");
        } else {
            printf("See you later!\n");
            break;
        }
    }
    return 0;
}

int print_menu(void) {
    int selection = 0;

    do {
        printf("Menu\n");
        printf("1) Roll D6\n");
        printf("2) Roll D10\n");
        printf("3) Quit\n");
        printf("Select an operation (1 -3).\n");
        if (scanf("%d", &selection) != 1) {
            while (getchar() != '\n');
            printf("Invalid input.\n");
            printf("\n");
        } else if (selection > 3 || selection < 1) {
            printf("We don't have that in the menu.\n");
            printf("\n");
        }
    } while (selection < 1 || selection > 3);

    return selection;
}

int roll_dice( int number) {
    srand(time(NULL));
    int roll = rand() % number + 1;

    return roll;
}