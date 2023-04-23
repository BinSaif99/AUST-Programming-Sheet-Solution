#include <stdio.h>

int main() {
   int roll_no;
   float marks;
   char name[50], phone[10];

   printf("Enter Roll No: ");
   scanf("%d", &roll_no);

   printf("Enter Name: ");
   scanf("%s", name);

   printf("Enter Marks: ");
   scanf("%f", &marks);

   printf("Enter Phone: ");
   scanf("%s", phone);

   printf("\nRoll No: %d", roll_no);
   printf("\nName: %s", name);
   printf("\nMarks: %.2f", marks);
   printf("\nPhone: %s", phone);

   return 0;
}
