// Anwar Gatto - 2025
// Licence is as listed in this github repo.
// For logic, view comments. For use, follow prompts. This program works off of the nature of arrays, being array names point to the arrays location, making it easy to pass between functions.

#include <stdio.h>

const int PLAYERS = 5;
const int DATA = 2; // global variables so the structure can be updated easily.

int menu(char option, int array[][DATA]); // Function dec. Must pass array with each call

int playerSearch(int array[][DATA], int target); // Must pass the array with each call.

int main(void) {

   int roster[PLAYERS][DATA]; // Each row is a player. Col 1 is their jersey number, col 2 is their score.
   int p; // First loop tracker
   int test = 0; // second loop test condition
   char select = 'm'; // Sets def. behavior and stores the var
   
   
   for (p = 0; p < PLAYERS; ++p){ // takes players jersy numbers and scores
      
      printf("Enter player %d's jersey number:\n", (p+1));
      
      scanf("%d", &roster[p][0]); // inputs the result into row p and col 1 (index 0)
         
      printf("Enter player %d's rating:\n", (p+1));
      
      scanf("%d", &roster[p][1]);
      printf("\n");
      }

   // Prints the roster
   printf("ROSTER\n");
   for (p = 0; p < PLAYERS; ++p){
      
      printf("Player %d -- Jersey number: %d, Rating: %d\n", (p + 1), roster[p][0], roster[p][1]);
      
      }
   
   while (test != 1){ // Loop for menu related tasks. The function will return 1 when the users selects q.
     
    menu('m', roster); // calls the menu options
     
    scanf(" %c", &select);
    
    test = menu(select, roster);
      
   }   
   
   return 0;
}

// Function def.
int menu(char option, int array[][DATA]){
   
   // To call the menu options, input m in the params.
   
   int p = 0;
   int jersey = 0;
   int newJersey = 0;
   int newRating = 0;
   int player = 0;
   int test;
   
   if (option == 'm'){ // Menu output
      printf("\nMENU\n");
      printf("u - Update player rating\n");
      printf("a - Output players above a rating\n");
      printf("r - Replace player\n");
      printf("o - Output roster\n");
      printf("q - Quit\n");
      printf("\nChoose an option:\n");
      
      }
      
      
    if (option == 'u'){ // Updates player rating
      
      printf("Enter a jersey number:\n");
      scanf("%d", &jersey);
      printf("\n");
      printf("Enter a new rating for player:\n");
      scanf("%d", &newRating);
      player = playerSearch(array, jersey);
      
      array[player][1] = newRating;
      
      }
      
   if (option == 'a'){
      
      printf("Enter a rating:\n");
      scanf("%d", &newRating);
      
      printf("\n\n");
      printf("ABOVE %d\n", newRating);
      
      for (p = 0; p < PLAYERS; ++p){
         
         if (array[p][1] > newRating){
         printf("Player %d -- Jersey number: %d, Rating: %d\n", (p + 1), array[p][0], array[p][1]);
            
            }
         
         }
      
      }
      
   if (option == 'r'){
      
      printf("Enter a jersey number:\n");
      scanf("%d", &jersey);
      printf("\nEnter a new jersey number:\n");
      scanf("%d", &newJersey);
      
      test = playerSearch(array, newJersey);
      
      while (test != 'e'){ // Makes sure that the newJersey isn't already entered.
         printf("\nEnter a new jersey number:\n");
         scanf("%d", &newJersey);
         test = playerSearch(array, newJersey);
         }
      
      printf("\nEnter a rating for the new player:\n");
      scanf("%d", &newRating);
      
      player = playerSearch(array, jersey);
      
      array[player][0] = newJersey;
      array[player][1] = newRating;
      
      }
   
   
   if (option == 'o'){
      
      printf("ROSTER\n");
      for (p = 0; p < PLAYERS; ++p){
         
         printf("Player %d -- Jersey number: %d, Rating: %d\n", (p + 1), array[p][0], array[p][1]);
         }
      }
   
   
   if (option == 'q'){ // Breaks the while loop when the user selects quit
      return 1;
      // exits the function
      }
   
   
   return 0; // If it doesn't return 1, it will always default back to returning 0.
   
   }

int playerSearch(int array[][DATA], int target){ // Searches for player #. Returns index number.
   
   int i;
   
   for (i = 0; i < 5; ++i){
      
      if (array[i][0] == target){
         return i;
         }
      
      }
      
   return 'e'; // to account for targets that don't exist, setup a conditional statement searching for char e.
   }
