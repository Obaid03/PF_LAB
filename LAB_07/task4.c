/* Write a program that calculates the length of a string using a pointer. Do not use the
built-in strlen() or sizeof() function. After length calculation reverse the string using
the same pointers */
#include <stdio.h>

int main() {
    char arr[100];
    int length = 0;
    char *ptr = arr;

    printf("Enter a string (without spaces): ");
    scanf("%s", arr);
    while (*ptr != '\0') {
        printf("%c", *ptr);
        length++;           
        ptr++;             
    }
    
    printf("\n");
    ptr--;
    char n[length];
    for (int i = 0; i < length; i++)
    {
        n[i] = *ptr;
        ptr--;
    }
    printf("%s", n);
    printf("\nLength of the string: %d\n", length); // Print the length
    return 0;
}
