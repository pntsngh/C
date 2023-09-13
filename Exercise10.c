#include <stdio.h>
#include <string.h>

int main() {
    while (1) {
        char string[50];
        char stop[] = "stop";

        printf("Enter a string:\n");
        fgets(string, 50, stdin);
        string[strlen(string) - 1] = '\0';
        printf("%llu\n", strlen(string));

        int compare = strcmp(stop, string);
        if (compare == 0) {
            break;
        }
    }
    return 0;
}
