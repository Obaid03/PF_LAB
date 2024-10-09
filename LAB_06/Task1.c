/*Which loop system would be better for user input. Justify your answer by creating a program that takes a value and adds it to a variable and prints it repeatedly until the user enters a zero value.*/
#include<stdio.h>
int main()
{
    int n=1,i=0;
   // printf("Enter Number");
    //scanf("%d",&n);
    while (n!=0)
    {
        printf("\nEnter Number\t");
        scanf("%d",&n);
        i=i+n;
        printf("The sum is \t%d",i);
    }
    return 0;
}