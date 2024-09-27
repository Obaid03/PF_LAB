/* TASK# 3:
 Write a program to control a coffee machine. Allow the user to input the type of coffee as B for Black
and W for White. Ask the user if the cup size is double and if the coffee is manual. The following table
details the time chart for the machine for each coffee type. Display a statement for each step. If the
coffee size is double, increase the baking time by 50 percent. Use functions to display instructions to the
user and to compute the coffee time.*/

#include<stdio.h>
int main(){
    char coffee, size;
	float multiplier,manual,water,sugar,mix,add_coffee,milk,total_time;
     
    printf("Enter the type of coffee you want to prepare\n'B' for Black\n'W' for White\n");
    scanf(" %c", &coffee);
   
    printf("Enter the size of coffee\nS for single\nD for Double\nM for Manual\n");
    scanf(" %c", &size);
   
    switch(size){
        case 'S':
        case 's': 
            multiplier = 1; 
            break;
        // To make double cup size coffee time need to be increased by 50% so Actual time multiplied by 1.5
        case 'D':
        case 'd': 
            multiplier = 1 + 0.5;
            break;
        // If we have to double the cup we have to increase the time by 50% so in manual percentage will be divided by 2
        case 'M':
        case 'm': 
            printf("By how much percentage do you want to increase the orignal cup size (in %): ");
            scanf(" %f", &manual);
            multiplier = 1 + ((manual/100)/2); 
            break;
        default:    
            printf("Wrong Size Entered");
    }

    switch(coffee){
        case 'W':
        case 'w':
            water= 15*multiplier;
            sugar= 15*multiplier;
            mix= 20*multiplier;
            add_coffee= 2*multiplier;
            milk= 20*multiplier;
            total_time = water+sugar+mix+add_coffee+milk+mix;
            printf("Putting Water:%.1f mins\n", water);
            printf("Putting Sugar:%.1f mins\n", sugar);
            printf("Mixing:%.1f mins\n",mix);
            printf("Adding Coffee:%.1f mins\n",add_coffee );
            printf("Adding Milk:%.1f mins\n", milk);
            printf("Mixing:%.1f mins\n", mix);
            printf("Total Time: %.1f mins", total_time);
            break;
        case 'B':
        case 'b':
            water= 20*multiplier;
            sugar= 20*multiplier;
            mix= 25*multiplier;
            add_coffee= 15*multiplier;
            total_time = water+sugar+mix+add_coffee+mix;
            printf("Putting Water:%.1f mins\n", water);
            printf("Putting Sugar:%.1f mins\n", sugar);
            printf("Mixing:%.1f mins\n",mix);
            printf("Adding Coffee:%.1f mins\n",add_coffee );
            printf("Mixing:%.1f mins\n", mix);
            printf("Total Time: %.1f mins", total_time);
            break;
        deault:
            printf("Wrong Coffee entered");
    }
return 0;
}
