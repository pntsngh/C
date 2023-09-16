#include <stdio.h>
#include <string.h>

int count_words(const char* str, const char *word) {
    int count = 0;

    while (*str) {
        char *find = strstr(str, word);
        if (find) {
            count ++;
            str = find + strlen(word);
        } else {
            break;
        }
    }
    return count;
}

int main() {
    char string[200];
    char find_word[20];

    do {
    printf("Enter a string:\n");
    fgets(string, 100, stdin);
    string[strlen(string) - 1] = '\0';
    printf("Enter a word:\n");
    fgets(find_word, 20, stdin);
    find_word[strlen(find_word) - 1] = '\0';

    int result = count_words(string, find_word);
    printf("The word '%s' occurs %d times in the string.\n",find_word, result);
    } while (strcmp(find_word, "stop") != 0);

    return 0;
}
