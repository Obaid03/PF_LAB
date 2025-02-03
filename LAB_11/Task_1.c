/* Write a program to copy the contents of one file to another. (Create a File with some
dummy data, The data is not required to be formatted) */
#include <stdio.h>
int main(){
    char name[50];
    FILE *fptr, *fptr1;
    fptr=fopen("file1.txt","r");
    if(fptr == NULL)
    {
        printf("Error!");
        return 1;}
        
    fptr1=fopen("file2.txt","w");
    if(fptr == NULL)
    {
        printf("Error!");
        return 1;}



    while(fscanf(fptr,"%s",name)!=EOF){
        fprintf(fptr1,"%s ",name);
    }
    fclose(fptr);
    fclose(fptr1);


}