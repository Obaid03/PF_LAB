/*
Task1:
Write a program that asks for the number of calories and fat grams in a food.  The program should display the percentage of calories that come from fat
One gram of fat has 9 calories, so Calories from fat = fat grams * 9
The percentage of calories from fat can be calculated as: calories from fat/total calories
Input validation: Make sure the number of calories and fat grams are not less than 0.
Also, the number of calories from fat cannot be greater than the total number of calories.  
If that happens, display an error message indicating that either the calories or fat grams were incorrectly entered.
*/

#include <stdio.h>
int main(void)
{
	float cal, fat, fcal,pc,tc; // Calories, Fat in Grams, Fat calories, Percentage Calories, Total Calories
	printf("Enter Total Calories\n");
	scanf("%f",&cal);
	printf("Enter Fat in Grams\n");
	scanf("%f",&fat);
	if (cal>0 && fat>0){
		fcal=(fat*9);
		tc= (cal+fcal);
		pc= ((fcal/tc)*100);
		printf("The percentage of calories from fat is: %.3f %",pc); 
		
	}
	else {
		printf("Calories and Fat in grams should be greater than Zero");
	}	
	
	
}
