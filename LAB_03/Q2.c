/*QUESTION#2
Write a C program that takes two integer values as input from the user. Then swap the values taken
from the user and display the output of the variables.*/


#include<stdio.h>
int main()
{
int a,b;
printf("Enter Fisrt Number\n");
scanf("%d",&a);
printf("Enter Second Number\n");
scanf("%d",&b);
int c=a;
a=b;
b=c;
printf("Fisrt Number is %d\n",a);
printf("Second Number is %d\n",b);
return 0;



}
