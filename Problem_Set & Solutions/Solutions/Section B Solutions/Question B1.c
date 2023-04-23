#include <stdio.h>

int main() {
    float marks;

    // take input from user
    printf("Enter the marks of the student: ");
    scanf("%f", &marks);

    // check if the student has passed or failed
    if (marks >= 40) {
        printf("Congratulations! The student has passed.\n");
    } else {
        printf("Sorry, the student has failed.\n");
    }

    return 0;
}
