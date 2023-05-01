#include <stdio.h>

int main() {
    int days, years, weeks, remainingDays;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    remainingDays = days - ((years * 365) + (weeks * 7));

    printf("%d days = %d years, %d weeks and %d days", days, years, weeks, remainingDays);

    return 0;
}
