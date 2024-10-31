/* Write a program which identifies if a given string is a palindrome using arrays. */
#include <stdio.h>
#include <string.h>
int main(){
    char word[50];
    
    printf("Enter the Word\t");
    scanf("%s",word);
    int i,p=0, size = strlen(word);
    for(i=0;i<(size/2);i++){
        if (word[i]==word[size-i-1]){
            p=1;
            continue;
        }
        else 
        p=0;
        break;
    }
    if (p==1){
        printf("%s is palindrome",word);
    }
    else
        printf("%s is not palindrome",word);
}
