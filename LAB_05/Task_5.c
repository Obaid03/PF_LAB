/* Task5:
Implement the following decision table using nested ternary operators.
Assume that the grade point average is within the range 0.0 through 4.0. */

#include <stdio.h>
int main()
{
    float gpa;
    printf("Enter Grade Point Average (0.00-4.00)\n");
    scanf("%f",&gpa);
    if ((gpa>= 0.00) && (gpa<=0.99))
    {
        printf("Your Gpa is %.2f\n",gpa);
        printf("Failed Semester- Registration Suspended\n");
        }
    else if((gpa>= 1.0) && (gpa<=1.99))
    {
        printf("Your Gpa is %.2f\n",gpa);
        printf("On Probation on next Semester\n");
        }
    else if((gpa>= 2.0) && (gpa<=2.99))
    {
        printf("Your Gpa is %.2f\n",gpa);
        printf("(No Message)\n");
        }
    else if((gpa>= 3.0) && (gpa<=3.49))
    {
        printf("Your Gpa is %.2f\n",gpa);
        printf("Dean's List For Semester\n");
        }
    else if((gpa>= 3.5) && (gpa<=4.00))
    {
        printf("Your Gpa is %.2f\n",gpa);
        printf("Highest Honors For Semester\n");
        }    
    else 
    {
        printf("Invlaid Grade Point Average Entered\n");
        }
return 0;


}