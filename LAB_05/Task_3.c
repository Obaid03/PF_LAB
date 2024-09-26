/* TASK# 3:
 Write a program to control a coffee machine. Allow the user to input the type of coffee as B for Black
and W for White. Ask the user if the cup size is double and if the coffee is manual. The following table
details the time chart for the machine for each coffee type. Display a statement for each step. If the
coffee size is double, increase the baking time by 50 percent. Use functions to display instructions to the
user and to compute the coffee time.*/

#include <stdio.h>
int main(void)
{
	char ct,cs; //Coffee Type, Cup size
	printf("Enter Coffee Type\nEnter 'B' for Black Coffee\nEnter 'W' for white coffee");
	scanf("%c",&ct);
	printf("Enter 'D' For Double cup size\nEnter 'S' For Single Cup size");
	scanf("%c",&cs);
	switch (ct)
	{
		case 'W':
		case 'w':
			switch (cs)
			{
				case 'D':
				case 'd':
					printf("Put Water--> 22.5 Mins\nPut Sugar--> 22.5 Mins\nMix Well--> 30 Mins\nAdd Coffee--> 3 Mins\nAdd Milk--> 6 Mins\nMix Well--> 30 Mins\n");
				
				case 's':
				case 'S':
					printf("Put Water--> 15 Mins\nPut Sugar--> 15 Mins\nMix Well--> 20 Mins\nAdd Coffee--> 2 Mins\nAdd Milk--> 4 Mins\nMix Well--> 20 Mins\n");
				
			}
		
		case 'B':
		case 'b':
L			switch (cs)
			{
				case 'D':
				case 'd':
					printf("Put Water--> 30 Mins\nPut Water--> 30 Mins\nPut Sugar--> 37.5 Mins\nMix Well--> 22.5 Mins\nAdd Coffee--> 3 Mins\nMix Well--> 30 Mins\n");
				
				case 's':
				case 'S':
					printf("Put Water--> 15 Mins\nPut Water--> 15 Mins\nPut Sugar--> 15 Mins\nMix Well--> 20 Mins\nAdd Coffee--> 2 Mins\nMix Well--> 20 Mins\n");
			
			
			
			
	}
	
	
	
}
