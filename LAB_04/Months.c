#include <stdio.h>
int main()
{
	int number;
	char letter;
	printf("Enter First Letter\n");
	scanf("%c",&letter);
	if((letter=='j')||(letter=='J')){
		printf("Enter Number\n");
		scanf("%d",& number);
		if(number==0)
		{printf("January");}
		else if(number==1)
		{printf("June");}
		else if(number==2)
		{printf("July");}
		else {printf("Invalid Number Entered");}}
	else if ((letter=='f')||(letter=='F')){
		printf("Februrary");}
	else if ((letter=='m')||(letter=='M')){	
		printf("Enter Number\n");
		scanf("%d", &number);
		if(number==0)
		{printf("March");}
		else if(number==1)
		{printf("May");}
		else {printf("Invalid Number Entered");}}
	else if ((letter=='a')||(letter=='A')){	
		printf("Enter Number\n");
		scanf("%d",&number);
		if(number==0){
		printf("April");}
		else if(number==1)
		{printf("August");}
		else {printf("Invalid Number Entered");}}
	else if ((letter=='s')||(letter=='S')){
		printf("September");}
	else if ((letter=='o')||(letter=='O')){
		printf("October");}
	else if ((letter=='n')||(letter=='N')){
		printf("November");}
	else if ((letter=='d')||(letter=='D')){
		printf("December");}
	else{ printf("invlaid Letter Enterd");}	
return 0; }
