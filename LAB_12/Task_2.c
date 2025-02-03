/*Write a program to implement the exchange or swap the values of 3 variables{a,b,c}. To
implement this, you need to write a function called swaped().*/
#include <stdio.h>
void swaped(int *aptr,int *bptr,int *cptr){
    int temp;
    temp= *bptr;
    *bptr= *aptr;
    *aptr= *cptr;
    *cptr= temp;
    printf("First --> %d\nSecond --> %d\nThird --> %d",*aptr,*bptr,*cptr);

}
int main(){
    int a,b,c;
    int *aptr=&a;
    int *bptr=&b;
    int *cptr=&c;
    printf("Enter First Element\n");
    scanf("%d",&a);
    printf("Enter Second Element\n");
    scanf("%d",&b);
    printf("Enter Third Element\n");
    scanf("%d",&c);


    swaped(aptr,bptr,cptr);


}