/* Task5:
Implement the following decision table using nested ternary operators.
Assume that the grade point average is within the range 0.0 through 4.0.*/

#include<stdio.h>
int main(){
    float gpa;
    printf("enter your GPA\n");
    scanf("%f",&gpa);

    (gpa>=0.00 && gpa<1.00)?printf("Failed semester"):(gpa>=1.00 && gpa<1.99)?printf("On probation for next semester"):(gpa>=2.00 && gpa<3.00)?printf("-"):(gpa>=3.00 && gpa<3.50)?printf("Dean's List For semester"):(gpa>=3.50 && gpa<=4.00)?printf("Highest Honor For Semester"):printf("Invalid GPA Entered");
return 0;
}
