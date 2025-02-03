/* Create a function to replace a word in a file with another word.
Read the file into memory, perform a search and replace, and write the modified
content back to the file. */
#include <stdio.h>
#include <string.h>

int getLen(char *pointer){
    int i=0;
    while(pointer[i]!='\0'){
        i++;
    }
    return i;
}

void replace(FILE *file,char *find, char *word){
    char buffer[10];
    int length=0;
    while(fscanf(file,"%s", buffer) != EOF){
        // printf("%s",buffer);
        length = getLen(buffer)+length+1;
        if(!strcmp(buffer, find)){
            fseek(file, length-(getLen(buffer)+1), SEEK_SET);
            fprintf(file, "%s" , word);

        }


    }
    printf("Done");
}

int main(){
    FILE *fptr;
    fptr = fopen("file.txt", "r+");
    if(fptr == NULL){
        printf("Error!");
    }
    char search[20],word[20];
    
    printf("Enter the word you want to replace in the file(max 20 letters): ");
    scanf("%s",search);
    printf("What do you want to replace it with:\t");
    scanf("%s",word);
    
    replace(fptr, search, word);

    fclose(fptr);
    return 0;
}
