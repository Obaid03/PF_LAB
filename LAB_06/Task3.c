#include <stdio.h>

int main() {
    int i, n, sum = 0, f = 0, s = 1, prime = 1;;

    printf("Enter the Number: ");
    scanf("%d", &n);

    if (n == 1 || n == 0) {
        printf("%d is not a prime number.\n", n);
    } else {
        for (i = 2; i<n; i++) {
            if (n % i == 0) {
                prime = 0; 
                break;
            }
        }

        if (prime) {
            printf("%d is a prime number.\n", n);
            printf("Fibonacci series up to %d:\n", n);

            if (n >= 0) {
                printf("%d ", f);
            }
            if (n >= 1) {
                printf("%d ", s);
            }
            for (i = 2;sum < n-1 ; i++) {
                sum = f + s;
                if (sum>n){
                    break;}
                printf("%d ", sum);
                f = s;
                s = sum;
            }
            printf("\n");
        } else {
            printf("%d is not a prime number.\n", n);
        }
    }

    return 0;
}
