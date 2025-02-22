// Anwar Gatto
// Feb 21, 2025
// Description and logic in comments

#include <stdio.h>

void wordNumbers(int digit){ // This function evaluates single place value digits for their english word equivalent. Saves space and programming complexity 
   
   switch(digit) {
      case 1:
         printf("one ");
         break;
      
      case 2:
         printf("two ");
         break;
      
      case 3:
         printf("three ");
         break;
      
      case 4:
         printf("four ");
         break;
      
      case 5:
         printf("five ");
         break;
      
      case 6:
         printf("six ");
         break;
      
      case 7:
         printf("seven ");
         break;
         
      case 8:
         printf("eight ");
         break;
         
      case 9:
         printf("nine ");
         break;
         
      case 0:
         printf("zero ");
         break;
      
      
      }
   return; // Returns to the main function
   }

int main(void)
{
   unsigned int areaCode = 0; // var declariation. All are unsigned since negative numbers will not be accepted.
   unsigned int i = 1;
   unsigned int digits = 1;
   int value1;
   int value2;
   int value3;
   int value4;
   int value5;
   
   
   while (digits != 5) { // Loop repeats until the input is 5 digits
   
      printf("Enter a 5-digit area code:");
      scanf("%u", &areaCode); // Takes input from user
      
      digits = 0; // resets the digit count for each input.
      i = areaCode; // This var lets us manipulate the area code input without losing the original data for later.
      
      if (areaCode > 0){ // Statement initates loop if the user entered a number more then the initalized value.
      
         while (i != 0){ // Loop counts number of digits
            i = i / 10;
            ++digits;
            }
         }
      else { // If the input is already zero, we know that it only has one digit.
         digits = 1;
         }
      
      if (digits != 5){
         printf("\nyou entered %d digits.\n", digits); // Prints the number of calculated digits
       }
      
   }

   // The below block provides the individual digits that make up the area code, starting from the lowest place value.
   value1 = areaCode % 10;
   value2 = (areaCode % 100)/10;
   value3 = (areaCode % 1000)/100;
   value4 = (areaCode % 10000)/1000;
   value5 = (areaCode % 100000)/10000;
   
   wordNumbers(value5); // Block of code repeatedly executes in the order that the numbers were input.
   wordNumbers(value4);
   wordNumbers(value3);
   wordNumbers(value2);
   wordNumbers(value1);
   
   return 0;
}
