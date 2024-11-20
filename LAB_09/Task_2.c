/* Create a C program that swaps the values of two integers using a user-defined function,
swapIntegers. The user inputs two integer values, and the program uses the function to swap
them. It should perform the swap and display the updated values.*/

#include <stdio.h>
void swap(int , int);
int temp=0;
int main(){
    int n1,n2;
    printf("Enter First Number\n");
    scanf("%d",&n1);
    printf("Enter Second Number\n");
    scanf("%d",&n2);
    swap(n1,n2);
    return 0;
}
void swap(int n1, int n2){
    temp=n1;
    n1=n2;
    n2=temp;
    printf("Numbers After Swapping:\nFirst %d\nSecond %d\n",n1,n2);
}