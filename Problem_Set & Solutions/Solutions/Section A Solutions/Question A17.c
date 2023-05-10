#include <stdio.h>

int main()
{
    int inches;
    printf("Enter the value of inches: ");
    scanf("%d", &inches);

    int yards = inches / 36;
    int feet = (inches - yards * 36) / 12;
    int remaining_inches = inches - yards * 36 - feet * 12;

    printf("Yards: %d\nFeet: %d\nInches: %d\n", yards, feet, remaining_inches);
    return 0;
}
