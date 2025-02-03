/*Write a program that ask the user to enter the total &#39;N&#39; no of characters in user&#39;s name {First
Name + Last Name} to create a dynamic array of characters. After create a dynamic array of
that &#39;N&#39; no of characters using malloc or calloc function. Finally copy your full name in it that has
already been taken from the user before
Dynamic Array = &quot;Muhib Ahmed&quot;;*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,n1,i,big=0;
    char *ptr;
    printf("Enter the Number of Letters in Your name\t");
    scanf("%d",&n);
    ptr=(char*) malloc((n+1) * sizeof(char));
    if (ptr==NULL){
        printf("ERROR!");
        return 0;
    }
    getchar();
    fgets(ptr,n+1,stdin);
    // scanf(" %n[^\n]",ptr);
    // ptr[n] = '\0';
    printf("%s",ptr);
    

}