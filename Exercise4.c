#include <stdio.h>

int read_integer(void);

int main() {
    int sum = 0;
    int count = 0;

    while (1) {
        int num = read_integer();
        if (num >= 0) {
            sum += num;
            count ++;
        } else {
            float avg = (float)sum / count;
            printf("Average of the numbers is %f\n", avg);
            break;
        }
    }

    return 0;
}

int read_integer(void) {
    int number = 0;
    do {
        printf("Enter positive numbers or negative to stop: \n");
        if (scanf("%d", &number) != 1) {
            while (getchar() != '\n');
            printf("Invalid input\n");
        }
    } while (number == 0);

    return number;
}
