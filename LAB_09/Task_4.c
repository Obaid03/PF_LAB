/* Write a C program with a user-defined function calculate to perform basic arithmetic operations
such as addition, subtraction, multiplication, and division. The program should take two
numbers and an operation choice as input, and then use the function to perform the operation. */

#include <stdio.h>
void cal(float , float,char);
float n1,n2;
int main(){
    char op;
    printf("Enter First Number\n");
    scanf("%d",&n1);
    printf("Enter Second Number\n");
    scanf("%d",&n2);
    printf("Enter The Opertation You want to Perform\n");
    scanf(" %c",&op);
    cal(n1,n2,op);
    return 0;
}
void cal(float n1, float n2,char op){
   switch (op){
    case '+':
        printf("%.2f",n1+n2);
        break;
    case '-':
        printf("%.2f",n1-n2);
        break;
    case '*':
        printf("%.2f",n1*n2);
        break;
    case '/':
        printf("%.2f",n1/n2);
        break;
    default:
        printf("Wrong Operation Entered\n");

   }
}