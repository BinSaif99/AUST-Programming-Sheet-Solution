#include <stdio.h>

#define PI 3.14159 // Defining the constant value of PI

int main() {
    float radius, area, circumference;

    // take input from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // calculate area
    area = PI * radius * radius;

    // calculate circumference
    circumference = 2 * PI * radius;

    // print the results
    printf("Area of the circle with radius %f is %f\n", radius, area);
    printf("Circumference of the circle with radius %f is %f\n", radius, circumference);

    return 0;
}
