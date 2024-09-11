/*QUESTION#5:
Construct a C program with the flowchart below. The input value of the principle must be between 100
Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time Period must be between
1 to 10 years. Hint: these restrictions can be displayed in the form of message on the window.*/


#include <stdio.h>

int main() 
{
    
    float principal, rate, time, simpleInterest;

    
    printf("Enter the principal amount (amount must be between 100 to 1,000,000):\n ");
    scanf("%f", &principal);

    printf("Enter the rate of interest in percentage (must be between 5% to 10%):\n ");
    scanf("%f", &rate);

    printf("Enter the time period in years (must be between 1 to 10 years):\n ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
