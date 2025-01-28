#include <stdio.h>
#include <math.h>

int main() {
   
// Variable declarations
   int people;
   int pizzasToBuy;
   double averageSlicesPerPerson;
   double pizzaCost;
   
   double tax;
   double delivery;
   
   // Constants
   const int PIZZA_SLICES = 8.0;
   const double SALES_TAX = 0.07;
   const double DELIVERY_COST = 0.2;
   
   // input code block
   scanf("%d", &people);
   scanf("%lf", &averageSlicesPerPerson);
   scanf("%lf", &pizzaCost);
   
   pizzasToBuy = ceil((averageSlicesPerPerson * people) / PIZZA_SLICES); // Figures out the min. number of pizzas to buy to fully satisfy everyone
   pizzaCost = pizzaCost * pizzasToBuy; // Calculates cost
   
   // Additional costs block
   tax = pizzaCost * SALES_TAX;
   double total = pizzaCost + tax; // Adds sales tax to pizza cost
   delivery = total * DELIVERY_COST; // delivery fee including tax
   
   double friTotal = total + delivery;

   
   // Friday night party outputs
   printf("Friday Night Party\n");
   printf("%d Pizzas: $%.2lf\n", pizzasToBuy, pizzaCost);
   printf("Tax: $%.2lf\n", tax);
   printf("Delivery: $%.2lf\n", delivery);
   printf("Total: $%.2lf\n", friTotal);
   printf("\n"); // New line between logic outputs
   
   // input code block for Saturday
   scanf("%d", &people);
   scanf("%lf", &averageSlicesPerPerson);
   scanf("%lf", &pizzaCost);
   
   // Saturday logic recalc
   
   pizzasToBuy = ceil((averageSlicesPerPerson * people) / PIZZA_SLICES); // Figures out the min. number of pizzas to buy to fully satisfy everyone
   pizzaCost = pizzaCost * pizzasToBuy; // Calculates cost
   
   // Additional costs block
   tax = pizzaCost * SALES_TAX;
   total = pizzaCost + tax; // Adds sales tax to pizza cost
   delivery = total * DELIVERY_COST; // delivery fee including tax
   
   double satTotal = total + delivery;
   
   // Sat. Outputs
   printf("Saturday Night Party\n");
   printf("%d Pizzas: $%.2lf\n", pizzasToBuy, pizzaCost);
   printf("Tax: $%.2lf\n", tax);
   printf("Delivery: $%.2lf\n", delivery);
   printf("Total: $%.2lf\n", satTotal);
   printf("\n"); // New line between logic outputs
   
   // Sunday inputs 
   
   scanf("%d", &people);
   scanf("%lf", &averageSlicesPerPerson);
   scanf("%lf", &pizzaCost);
   
   // Sunday logic recalc
   
   pizzasToBuy = ceil((averageSlicesPerPerson * people) / PIZZA_SLICES); // Figures out the min. number of pizzas to buy to fully satisfy everyone
   pizzaCost = pizzaCost * pizzasToBuy; // Calculates cost
   
   // Additional costs block
   tax = pizzaCost * SALES_TAX;
   total = pizzaCost + tax; // Adds sales tax to pizza cost
   delivery = total * DELIVERY_COST; // delivery fee including tax
   
   double sunTotal = total + delivery;
   
    // Sun. Outputs
   printf("Sunday Night Party\n");
   printf("%d Pizzas: $%.2lf\n", pizzasToBuy, pizzaCost);
   printf("Tax: $%.2lf\n", tax);
   printf("Delivery: $%.2lf\n", delivery);
   printf("Total: $%.2lf\n", sunTotal);
   printf("\n"); // New line between logic outputs
   
   // Weekend total block
   double weekendTotal = friTotal + satTotal + sunTotal;
   printf("Weekend Total: $%.2lf\n", weekendTotal);

   return 0;
}
