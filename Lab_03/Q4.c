

#include <stdio.h>

int main ()

{

float distance = 1207.0;
float fpf = 118.0; //Fuel Price Forward//
float fpr = 123.0; //Fuel Price while returning//
float fa,tc,tfc; // Fuel Average, Total cost, Total Fuel consumed//
printf("Enter your car's fuel average in KM/Lit\n");

scanf("%f", & fa);


tfc = (2 * distance) / fa;


tc= ((distance / fa) * fpf) + ((distance / fa) * fpr);


printf("Total fuel consumed for the whole trip: %.2f liters\n", tfc);
 
printf("Total fuel cost for the whole trip: %.2f\n", tc);



return 0;

}