#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,n1,*ptr,i,big=0;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    ptr=(int*) malloc(n * sizeof(int));
    if (ptr==NULL){
        printf("ERROR!");
        return 0;
    }
    for(i=0;i<n;i++){
        scanf("%d",&ptr[i]);
    }
    printf("Enter the new size of array\t");
    scanf("%d",&n1);
    ptr=(int*) realloc(ptr,n1 * sizeof(int));
     if (ptr==NULL){
        printf("ERROR in REALLOC!");
        return 0;
    }
    for(i=n;i<n1;i++){
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n1;i++){
        if(ptr[i]>big){
            // ptr[i+1]=big;
            big=ptr[i];
        }
        // else
        // // ptr[i]=big;
        // big=ptr[i];
    }
    printf("%d",big);
    

}