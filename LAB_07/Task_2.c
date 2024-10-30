/* Write a program that takes a string as input from the user and counts the frequency
of each vowel (A, E, I, O, U) in the string
Input: Hello World
Output: a=0, e=1, I=0, o=2, u= 0*/

#include <stdio.h>
int main()
{
    int i,a=0,e=0,I=0,o=0,u=0;
    char arr[20];
    printf("Enter the word \t (limit-15 characters)\t");
    scanf("%s",arr);
    int size = sizeof(arr)/ sizeof(arr[0]);
    for(i=0;i<size;i++)
    {
        switch (arr[i])
        {
        case 'A':
        case 'a':
            a++;
            continue;
        case 'E':
        case 'e':
            e++;
             continue;
        case 'I':
        case 'i':
            I++;
            continue;
        case 'O':
        case 'o':
            o++;
            continue;
        case 'U':
        case 'u':
            u++;
            continue;
        
        // default:
        //     continue;
        }
    }
printf("a=%d \t e=%d \t i=%d \t o=%d \t u=%d \t",a,e,I,o,u );
}
