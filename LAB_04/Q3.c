/* QUESTION #3
Create a calculator asking for operator (+ or – or * or /) and operands and performs calculation according to the user input using switch statement.*/
#include <stdio.h>
int main()
{
	float n1,n2;
	char op;
	printf("Enter First Number\n");
	scanf("%f",&n1);
	printf("Enter Second Number\n");
	scanf("%f",&n2);
	printf("Enter operator\n");
	scanf(" %c",&op);
	switch (op){
		case '+':
			printf("The sum of Number 1 and Number 2 is %f",(n1+n2));
			break;
		case '-':
			printf("The difference of Number 1 and Number 2 is %f",(n1-n2));
			break;
		case '*':
			printf("The product of Number 1 and Number 2 is %f",(n1*n2));
			break;
		case  '/':
			printf("The Division of Number 1 and Number 2 is %f",(n1/n2));
			break;
		default:
			printf("Invalid operator Entered");
				
		
		
	}
	return 0;
}