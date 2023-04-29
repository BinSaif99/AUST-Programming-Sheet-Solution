#include <stdio.h>

int main() {
    float principle, rate, time, interest, total_amount;

    // Input principle, rate and time
    printf("Enter principle: ");
    scanf("%f", &principle);
    printf("Enter rate: ");
    scanf("%f", &rate);
    printf("Enter time: ");
    scanf("%f", &time);

    // Calculate simple interest and total amount
    interest = (principle * rate * time) / 100;
    total_amount = principle + interest;

    // Display all the values
    printf("Principle: %f\n", principle);
    printf("Rate: %f\n", rate);
    printf("Time: %f\n", time);
    printf("Simple Interest: %f\n", interest);
    printf("Total Amount: %f\n", total_amount);

    return 0;
}
