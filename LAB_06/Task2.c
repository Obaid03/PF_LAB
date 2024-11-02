//Write a program to check whether a given number is prime or not.
#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the Number\t");
    scanf("%d",&n);
    if(n==1||n==0){
        printf("It is not a prime number");
        return 0;
    }
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            printf("It is not a prime Number");
            return 0;
        } 
    }
    printf("It is a prime Number");
return 0;
}
