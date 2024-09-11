/*QUESTION#5:
Construct a C program with the flowchart below. The input value of the principle must be between 100
Rs. To 1,000,000 Rs. The Rate of interest must be between 5% to 10% and Time Period must be between
1 to 10 years. Hint: these restrictions can be displayed in the form of message on the window.*/


#include <stdio.h>

int main() 
{
    
    float principal, rate, time, simpleInterest;

    
    printf("Enter the principal amount :\n "); //value of the principle must be between 100Rs. To 1,000,000 Rs.
    scanf("%f", &principal);

    printf("Enter the rate of interest in percentage :\n "); //Rate of interest must be between 5% to 10%
    scanf("%f", &rate);

    printf("Enter the time period in years :\n "); //Time Period must be between 1 to 10 years.
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}
