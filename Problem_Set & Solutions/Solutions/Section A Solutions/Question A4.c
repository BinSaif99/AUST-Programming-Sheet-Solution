#include <stdio.h>

int main() {
    int num, cube;

    // take input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // calculate cube
    cube = num * num * num;

    // print cube
    printf("Cube of %d is %d\n", num, cube);

    return 0;
}
