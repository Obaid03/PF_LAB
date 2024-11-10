/* Create a program that accepts a 2D array of strings (e.g., 5 words with a max length of 20
characters each). Determines if each word (row) is a palindrome. Outputs “Palindrome” or “Not
Palindrome” for each word. A palindrome is a word that reads the same forward and backward.
For example: "madam" , "racecar" , "level" , "radar" */

#include <stdio.h>
#include <string.h>
int main(){
    int i,j,palindrome;
    char word[5][20];
    printf("Enter 5 words with a max length of 20 characters each\n");
    for ( i=0;i<5;i++){
            printf("Enter Word %d\t",i+1);
            scanf("%s",word[i]);            
    }
    for(i=0;i<5;i++){
        int n=0;
        palindrome=1;
        n=strlen(word[i]);
        for(j=0;j<n/2;j++){
            if(word[i][j]!=word[i][n-j-1]){
                palindrome=0;
            }
        }
        if(palindrome){
            printf("%s is palindrome\n",word[i]);
        
        }
        else{
            printf("%s is not palindrome\n",word[i]);


        }
    }
    }