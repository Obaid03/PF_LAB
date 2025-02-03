/* How would you implement a program to count the occurrences of each word in a text
file? Write the approach and code. */

#include <stdio.h>
#include <string.h>

int main(){
    FILE *fptr;
    fptr = fopen("file1.txt", "r");
    if(fptr == NULL){
        printf("Error!");
    }
    char word[20];
    char buffer[20];
    int counter=0;
    printf("Enter the word you want to find in the file(max 20 Letters): \t");
    scanf("%s",word);
    

    while(fscanf(fptr,"%s ", buffer) != EOF){
        if(!strcmp(buffer, word)){
            counter++;
        }
    }
    printf("Your word appeared %d times\n",counter);
    fclose(fptr);
    return 0;
}