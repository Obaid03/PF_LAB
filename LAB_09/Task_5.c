/* Create a function that reverses a given string and returns the reversed string. Use this function
in the main program to display the reversed string entered by the user. */

#include <stdio.h>
#include <string.h>
int i ;
void array (char str[], int size ){
    char str2[100]={0};
    for (i=0;i<size;i++){
        str2[i]=str[size-i-1];
    }
    printf("%s\n",str2);
}
int main(){
    char str[100];
    printf ("Enter The String\n");
    gets(str);
    int size = strlen(str);
    array (str,size);
    return 0;
}    
