#include <stdio.h>
#include <limits.h>

int main() {
    char input[20];
    printf("Enter a filename:\n");
    scanf("%s", input);

    FILE *fpointer = fopen(input, "r");

    if (fpointer == NULL) {
        fprintf(stderr, "File not found or cannot be opened.\n");
        return 1;
    }

    int count = 0;
    int num = 0;
    int low = INT_MAX;
    int high = INT_MIN;

    while (fscanf(fpointer, "%d", &num) == 1) {
        if (num < low) {
            low = num;
        }
        if (num > high) {
            high = num;
        }
        count++;
    }
    if (count > 0) {
        printf("Number of integers: %d\n", count);
        printf("Highest integer: %d\n", high);
        printf("Lowest integer: %d\n", low);
    }
    else {
        printf("No integers found.");
    }
    fclose(fpointer);
    return 0;
}
