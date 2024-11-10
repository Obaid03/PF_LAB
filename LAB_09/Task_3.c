/* Implement a function that checks if a given integer is a prime number. Use this function in the
main program to check if numbers entered by the user are prime. */

#include <stdio.h>
void isprime(int n);
int main(){
    int n;
    printf("Enter a Number\t");
    scanf("%d",&n);
    isprime(n);
}
void isprime(int n){
    int i,prime=1;
    if (n>1){
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime){
            printf("It is a Prime number\n");
        }
    else{
            printf("It is not a Prime number\n");
        }
    }
    else{
            printf("It is not a Prime number\n");

    
    }
}