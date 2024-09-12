/*QUESTION#3
A customer asks the IT firm to develop a program in C language, which can take tax rate and salary from
the user on runtime and then calculate the tax, the user has to pay and the salary he/she will have after
paying the tax. This information is then provided to the user.*/



#include <stdio.h>
int main(void)
{


float salary,tax,tax_rate,net_salary;
printf("Enter your Salary\n");
scanf("%f",& salary);
printf("Enter Tax rate in Percentage\n");
scanf("%f",& tax_rate);
tax=(tax_rate/100)*salary;
net_salary= salary - tax;
printf("The tax you have to pay is: %.2f\n", tax);

printf("Your salary after paying the tax is: %.2f\n", net_salary);
return 0;




}
