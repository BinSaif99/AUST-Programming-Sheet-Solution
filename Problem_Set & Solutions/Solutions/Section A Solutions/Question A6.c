#include <stdio.h>

int main() {
    float length, breadth, area, perimeter;

    // take input from user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // calculate area
    area = length * breadth;

    // calculate perimeter
    perimeter = 2 * (length + breadth);

    // print the results
    printf("Area of the rectangle with length %f and breadth %f is %f\n", length, breadth, area);
    printf("Perimeter of the rectangle with length %f and breadth %f is %f\n", length, breadth, perimeter);

    return 0;
}
