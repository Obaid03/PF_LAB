/* QUESTION #2
Write a C program which asks the user for an input (any number) and only accepts numbers that are (positive, multiple of 2 and divisible by 10). Any other number should be discarded (Write the condition in a single statement no nesting).*/


#include<stdio.h>
int main()
{
	int number;
	printf("Enter the Number\n");
	scanf("%d",& number);
	if ((number >0) && (number %2==0 ) && (number%10==0) ){
		printf("The Number is Acceptable");}
	else {
		printf("The number is not Acceptable");
	}	
	
	return 0;
	
	
}