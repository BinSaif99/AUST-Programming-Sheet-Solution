#include <stdio.h>

int main() {
    int a, b, c, d;

    // take input from user
    printf("Enter four integers a, b, c, and d: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // check the equation
    if (a*a*a + b*b*b + c*c*c == d*d*d) {
        printf("The equation a^3 + b^3 + c^3 = d^3 is satisfied\n");
    } else {
        printf("The equation a^3 + b^3 + c^3 = d^3 is not satisfied\n");
    }

    return 0;
}
