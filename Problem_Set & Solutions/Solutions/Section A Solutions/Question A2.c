#include <stdio.h>

int main() {
   int rollNo;
   char name[50];
   float marks[5], total = 0, average;

   printf("Enter roll number: ");
   scanf("%d", &rollNo);

   printf("Enter name: ");
   scanf("%s", name);

   for(int i = 0; i < 5; i++) {
      printf("Enter marks for subject %d: ", i+1);
      scanf("%f", &marks[i]);
      total += marks[i];
   }

   average = total / 5;

   printf("\nRoll Number: %d\n", rollNo);
   printf("Name: %s\n", name);

   for(int i = 0; i < 5; i++) {
      printf("Subject %d Marks: %.2f\n", i+1, marks[i]);
   }

   printf("Total Marks: %.2f\n", total);
   printf("Average Marks: %.2f\n", average);

   return 0;
}

