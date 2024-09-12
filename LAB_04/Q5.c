/* Write a C program to input a character from the user and check whether the given character is a small alphabet, capital alphabet, digit, or special character, using if else.*/
#include<stdio.h>
int main()
{
	char fv;
	printf("Enter any Number or any Alphabet\n");
	scanf("%c",&fv);
	if ((fv>='a') && fv<='z'){
		printf("This is a small Character\n");}
	else if ((fv>='A')&&(fv<='Z')){
		printf("This is a Capital charater\n");}
	else if ((fv>='0')&&(fv<='9')){
		printf("This is a Number\n");}
	else {
		printf("This is a special Character");
	}	
		

}