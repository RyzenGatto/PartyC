// Anwar Gatto
// 2/17/25
// Description is in comments
// github.com/RyzenGatto/PartyC

#include <stdio.h>

int main(void) {

   // Below are all of my vars. Unsigned ints are used since negative numbers aren't accepted anyway. Helps to keep mem usage down
   
   unsigned input1;
   unsigned digit1; // Digit 1 and 2 are the numbers in the ones (1) and 10s (10) place values.
   unsigned digit10;
   unsigned avgTracker;
   unsigned i = 0; 
   float average; // Float since averaging numbers can yield values after the decimal
   
   
   printf("Please provide your integer\n"); // Asks for and takes an input
   scanf("%d", &input1);
   
   if ((input1 < 10) || (input1 > 99)){
      printf("Input must be 10-99\n");
      return 2; // This line here brakes the code and returns unique error code 2 to make it clear an error has occured (invalid input)
      }

   // Calculations to see if it should go into the if statement in terminate, or if the code should continue to the loop.
   digit1 = input1 % 10;
   digit10 = (input1 - digit1) / 10;
   
   
   if ((digit1 % 2 > 0) && (digit10 % 2 > 0)){  //This if statement runs two calculations to see if digit1 and digit10 are even or odd. If they're already both odd the program ends.
      printf("%d\n", input1);
      
      average = (double) input1; // No need to bog down the computer with extra calculations, we know that the average will always be the input in this case.
      
      printf("average is %.2lf\n", average);
      return 0; // Brakes code sequence, successful execution.
      }

   avgTracker = input1; // Initalizes average value tracker
   printf("%d ", input1); // Outputs the input int so its part of the end outputs
   
   while ((digit1 % 2 == 0) || (digit10 % 2 == 0)){
      
      ++i; // Number of times loop was executed 
      --input1; // decrements input1 every loop
      printf("%d ", input1);
      
      avgTracker = avgTracker + input1;
      
      // Copied math block from above, same purpose
      digit1 = input1 % 10;
      digit10 = (input1 - digit1) / 10;
      
      }
   ++i; // This is to count for the final loop execution, to get the average right.
   average = avgTracker / (float)i; // Calcs average after the loop
   printf("\naverage is %.2lf", average);

   return 0;
}
