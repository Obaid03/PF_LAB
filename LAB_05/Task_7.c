/*Task7:
Using Ternary operators write a C-Program that can identify if the last digit of the
number is zero or non-zero. If its zero, the program should print “Last Digit is zero” if it’s
non-zero the program should print “Last Digit non-zero” */

#include<stdio.h>
int main(){
    int number;
    printf("Enter a number ..");
    scanf("%d",&number);
    (number%10 == 0)?printf("Last digit zero"):printf("Last digit non zero");
return 0;
}
