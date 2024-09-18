#include <stdio.h>

int main() 
{

float cost , savedAmount, finalAmount;
float discount = 0;

printf("Enter the total cost of items: ");
scanf("%f", &cost);
if (cost >= 500) {
     if (cost < 2000) 
           { discount = 5;   } 
     else if (cost <= 4000) 
           { discount = 10;  }
     else if (cost <= 6000) 
           { discount = 20;  }
     else 
           { discount = 35;  }

       
        savedAmount = (cost * discount) / 100;
        finalAmount = cost - savedAmount;

        
        printf("Original Amount: %.2f\n", cost);
        printf("Saved Amount: %.2f\n", savedAmount);
        printf("Amount After Discount: %.2f\n", finalAmount);
    } else  {
     
        printf("The total cost is less than the minimum eligible for a discount.\n");
        printf("Original Amount: %.2f\n", cost);
    }

    return 0;
}
