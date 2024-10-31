/* Given an array arr[] of size N which contains elements from 0 to N-1, you need to
find one of the elements occurring more than once in the given array. */

#include<stdio.h>
int main(){
    int arr[100];
    int freq[100]={0};
    int i,size;
    printf("Enter the Size Of Array: ");
    scanf("%d",&size);
    printf("Enter %d numbers:\n",size);
    for(i=0;i<size;i++){
        printf("Number %d: ",i+1);
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }
    
    for(i=0;i<99;i++){
        if(freq[i]>1){
        printf("Number %d occured %d times\n",i,freq[arr[i]]);
        }   
    }
}
