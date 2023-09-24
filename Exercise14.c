#include <stdio.h>
#include <ctype.h>

#define MAXLEN 80
#define MAXLINES 100

int main() {
    char array[MAXLINES][MAXLEN];
    char input[20];
    printf("Enter a filename:\n");
    scanf("%s", input);

    FILE *fpointer = fopen(input, "r");

    if (fpointer == NULL) {
        fprintf(stderr, "File not found or cannot be opened.\n");
        return 1;
    }

    int line = 0;

    while (!feof(fpointer) && !ferror(fpointer)) {
        if (fgets(array[line], MAXLEN, fpointer) != NULL){
            ++line;
        }
    }

    fclose(fpointer);

    for (int i = 0; i < line; ++i) {
        for (int j = 0; array[i][j]; ++j) {
            array[i][j] = toupper(array[i][j]);
        }
    }

    fpointer = fopen(input, "w");

    for (int i = 0; i < line; ++i) {
        fprintf(fpointer, "%s\n", array[i]);
    }

    fclose(fpointer);

    return 0;
}
