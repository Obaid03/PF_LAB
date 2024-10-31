/* Write a program to read 10 integers into an array. Then, use loops to find the
frequency of each element in the array (how many times each number occurs).*/

#include <stdio.h>
int main(){
    int freq[100]={0},var[10];
    int i=0;
    printf("Enter 10 Numbers\n");
    for(i=0;i<10;i++){
        printf("Enter Element %d\t",var[i]);
        scanf("%d",&var[i]);
        freq[var[i]]++;
        
    }
    i=0;

    for(i=0;i<99;i++){
        if(freq[i]>0){
        printf("%d is occured %d times\n",i,freq[i]);
    }}
    i++;
}
