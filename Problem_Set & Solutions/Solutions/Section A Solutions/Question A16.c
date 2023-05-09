#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    (marks >= 40) ? printf("You passed!") : printf("You failed!");
    return 0;
}
