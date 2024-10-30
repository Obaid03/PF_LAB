/* Create a program that takes an array of size 6 and shifts all its elements to the right
by one position. The last element should move to the first position.
Input: {1,2,3,4,5,6}
Output: {6,1,2,3,4,5} */

#include <stdio.h>
int main()
{
    int n[6]={1,2,3,4,5,6};
    int l=0,i;
    l=n[5];
    for(i=5;i>0;i--){
        
        n[i]=n[i-1];
    }
    n[0]=l;
    for (i=0;i<6;i++){
        printf("%d ",n[i]);
    }
    

}
