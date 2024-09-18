#include <stdio.h>

int main() 
{

int customerID, units;
char first_letter;  // Storing a first character
float chargePerUnit, amount, totalAmount;
float surcharge = 0;


printf("Enter Customer ID: ");
scanf("%d", &customerID);
printf("Enter Your Name's First letter (single character): ");
scanf(" %c", &first_letter);
printf("Enter Units Consumed: ");
scanf("%d", &units);

    if (units <= 199) {
        chargePerUnit = 16.20;
    } else if (units >= 200 && units < 300) {
        chargePerUnit = 20.10;
    } else if (units >= 300 && units < 500) {
        chargePerUnit = 27.10;
    } else {
        chargePerUnit = 35.90;
    }

   
    amount = units * chargePerUnit;

   
    if (amount > 18000) {
        surcharge = 0.15 * amount;
    }

    totalAmount = amount + surcharge;

   
    printf("\nCustomer ID: %d\n", customerID);
    printf("Customer First Letter: %c\n", first_letter);
    printf("Units Consumed: %d\n", units);
    printf("Amount Charges @Rs. %.2f per unit: %.2f\n", chargePerUnit, amount);
    printf("Surcharge Amount: %.2f\n", surcharge);
    printf("Net Amount Paid by the Customer: %.2f\n", totalAmount);

    return 0;
}
