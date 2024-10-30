/* Write a program which identifies if a given string is a palindrome using arrays. */
#include <stdio.h>
int main(){
    char word[3];
    int i,p=0, size= sizeof(word)/sizeof(word[0]);
    printf("Enter the Word\t");
    scanf("%s",word);
    for(i=0;i<3;i++){
        if (word[i]==word[3-1]){
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
