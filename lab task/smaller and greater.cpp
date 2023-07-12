#include <stdio.h>

int main() {
   int count = 1;    // counter for the while loop
   int num, sum = 0; // variables to store the numbers and the sum
   int largest, smallest;
   float average;

   // ask user to enter 10 numbers
   while (count <= 10) {
      printf("Enter number %d: ", count);
      scanf("%d", &num);

      // update sum and find largest and smallest numbers
      if (count == 1) {  // first number entered
         largest = num;
         smallest = num;
      } else {
         if (num > largest) {
            largest = num;
         }
         if (num < smallest) {
            smallest = num;
         }
      }
      sum += num; // add num to sum
      count++;   // increment counter
   }

   // calculate average
   average = (float) sum / 10;

   // print results
   printf("\nSum: %d\n", sum);
   printf("Average: %.2f\n", average);
   printf("Largest number: %d\n", largest);
   printf("Smallest number: %d\n", smallest);

   return 0;
}