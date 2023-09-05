#include <stdio.h>
#include <stdbool.h>

bool read_positive (int *value) {
    int input = 0;

    printf("Enter a positive number: \n");
    if (scanf("%d", &input) == 1 && input > 0) {
        *value = input;
        return true;
    } else {
        while (getchar() != '\n');
        printf("Invalid input\n");
        return false;
    }
}

int main() {
     int count = 0;

    while (count < 3) {
        int guess = 0;

        printf("Guess how much money I have!\n");
        if (read_positive(&guess) == true) {
            printf("You didn't get it right. I have %d\n", guess * 2 + 20);
        } else {
            count += 1;
        }
    }
    printf("I give up! See you later!\n");
    return 0;
}
