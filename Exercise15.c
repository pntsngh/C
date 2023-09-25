#include <stdio.h>

typedef struct menu_item_ {
    char name[50];
    double price;
} menu_item;


int main() {
    char input[20];
    printf("Enter a filename:\n");
    scanf("%s", input);

    FILE *fpointer = fopen(input, "r");

    if (fpointer == NULL) {
        fprintf(stderr, "File '%s' not found or cannot be opened.\n", input);
        return 1;
    }

    menu_item items[40];
    int count = 0;

    do {
        fscanf(fpointer, "%49[^;]; %lf\n", items[count].name, &items[count].price);
        ++count;
    } while (!feof(fpointer));

    fclose(fpointer);

    printf("   Price    Name\n");
    for (int i = 0; i < count; ++i) {
        printf("%8.2f    %s\n", items[i].price, items[i].name);
    }

    return 0;
}
