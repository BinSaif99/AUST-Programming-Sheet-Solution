#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, spaces, tabs, newlines;

    // take input from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // initialize the counters
    spaces = tabs = newlines = 0;

    // loop through the string
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] == '\t') {
            tabs++;
        } else if (str[i] == '\n') {
            newlines++;
        }
    }

    // print the results
    printf("Number of spaces = %d\n", spaces);
    printf("Number of tabs = %d\n", tabs);
    printf("Number of new lines = %d\n", newlines);

    return 0;
}
