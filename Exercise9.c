#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int find_first(const unsigned int *array, unsigned int what){
    for (int i = 0; i < 20; ++i) {
        if (array[i] == what) {
            return i;
        }
    }
    return -1;
}

int main() {
    srand(time(NULL));

    int integers[20];
    for (int i = 0; i < 19; ++i) {
        integers[i] = rand() % 20 +1;
    }
    integers[19] = 0;

    for (int i = 0; i < 20; ++i) {
        printf("%d\n", integers[i]);
    }

    while (1) {
        int number = 0;
        printf("Enter a number: \n");
        scanf("%d", &number);
        
        if (number == 0) {
            break;
        }

        int index = find_first(integers, number);

        if (index != -1) {
            printf("Number found at index %d\n", index);
        }
        else {
            printf("Number not found\n");
        }
    }
    return 0;
}
