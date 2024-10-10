#include<stdio.h>
int main ()
{
    int n,ld,sum=0,i;
    printf("Enter Number\t");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        ld=i%10;
        sum=sum+(ld*ld*ld);
        i=i/10;   
    }
    if (sum==n)
    printf("The number is an armstrong");
    else
    printf("The number is not an armstrong"); 
    return 0;
}
