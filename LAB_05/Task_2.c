/* Task2:
The weekday is true if it is a weekday, and the vacation is true if we are on vacation. We sleep in if it is
not a weekday or we are on vacation. Print true if we sleep in.
sleepIn(false, false) ? true
sleepIn(true, false) ? false
sleepIn(false, true) ? true */

#include <stdio.h>
int main()
{
    int wd,v;
    printf("Enter '1' For Weekday\nEnter '0' For Weekend\n");
    scanf("%d",&wd);
    printf("Enter '1' If you are on Vacation\nEnter '0' If you are not on Vacation\n");
    scanf("%d",&v);
    if ( (wd==0) || (v==1)){
        printf("True\n");}
    else if ( (wd==1) || (v==0)){
        printf("False\n");
    }
    else {
        printf("Invalid Number Entered\n");
    }
return 0;
}