/*Task 1: Write a program that calculates the sum of all the elements in array using pointers
(Note: Generate the array via user)*/
#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number of Elements\t");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("Enter Element NO %d: \t",i+1);
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    for (i=0;i<n;i++){
        sum=sum+ *(ptr+i);
    }
    printf("%d",sum);
}