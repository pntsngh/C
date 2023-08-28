#include <stdio.h>

int main() {
    int students = 0;

    printf("How many students: \n");
    scanf("%d", &students);

    int grades[students];

    for (int i = 0; i < students; ++i) {
        grades[i] = -1;

    }

    int number, grade = 0;

    while (1) {
        printf("Enter student number (1 - %d) or 0 to stop: ", students);
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        if (number < 1 || number > students) {
            printf("Invalid input\n");
            continue;
        }

        printf("Enter grade (0 - 5) for student %d or -1 to cancel: ", number);
        scanf("%d", &grade);

        if (grade < -1 || grade > 5) {
            printf("Invalid input\n");
            continue;
        }

        grades[number - 1] = grade;

    }

    printf("Student Grade\n");
    for (int i = 0; i < students; ++i) {
        printf("    %d", i+1);
        if (grades[i] == -1) {
            printf("     N/A\n");
        }
        else {
            printf("     %d\n", grades[i]);
        }

    }

    return 0;
}
