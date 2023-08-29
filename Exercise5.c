#include <stdio.h>

int read_range(int low, int high);

int main() {
    printf("Let's play!\n");
    for (int i = 0; i < 3; ++i) {
        read_range(1, 6);
    }
    printf("Better luck next time. Bye!");

    return 0;
}

int read_range(int low, int high) {
    int result = 0;

    do {
        printf("Roll a dice and enter your result.\n");
        printf("Enter a number between %d and %d:", low, high);
        if (scanf(" %d", &result) != 1) {
            while (getchar() != '\n');
            printf("Invalid input.\n");
        } else if (result > high) {
            printf("Result is too big.\n");
        } else if (result < low) {
            printf("Result is too small.\n");
        }
    } while (result < low || result > high);

    if (result == high) {
        printf("I got %d. It's a tie!\n", high);
    } else {
        printf("I got %d. I win!\n", result + 1);
    }

    return result;
}