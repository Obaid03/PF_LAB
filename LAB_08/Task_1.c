/* Write a C program that generates a sequence of prime numbers within a given range using
nested loops. */
#include <stdio.h>

int main() {
    int i, j, prime, f, n;

    printf("Enter starting value of the range: ");
    scanf("%d", &f);
    printf("Enter the ending value of the range: ");
    scanf("%d", &n);
     if(n==1||n==0){
        printf("no prime number exists in this range\n");
        return 0;
    }
    
    printf("Prime numbers from %d to %d are:\n", f, n);

    for (i = f; i <= n; i++) {
        prime = 1;
        if (i < 2) {
            prime = 0;
        } else {
            for (j = 2; j < i; j++) { 
                if (i % j == 0) {
                    prime = 0; 
                    break;
                }
            }
        }
        if (prime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
