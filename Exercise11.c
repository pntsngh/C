#include <stdio.h>
#include <string.h>

int replace_char(char *str, const char *repl){
    int lenght = strlen(str);
    int count = 0;
    for (int i = 0; i < lenght; ++i) {
        if (str[i] == repl[0]) {
            str[i] = repl[1];
            count ++;
        }
    }
    return count;
}

int main() {
    char text[80];
    char replace[3];

    printf("Enter a string:\n");
    fgets(text, 80, stdin);
    printf("Enter 2 characters:\n");
    fgets(replace, 3, stdin);

    int rep = replace_char(text, replace);
    if (rep > 0) {
        printf("%d characters replaced\n Modified string: %s", rep, text);
    } else {
        printf("String was not modified");
    }

    return 0;
}
