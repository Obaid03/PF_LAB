/* QUESTION#6:
Explain the output of this C program. Why the wrong value is being displayed in the output?*/
#include <stdio.h>
int main()
{ int test_integer=3000000000;
printf("Number is %d",test_integer);
return 0;
}


/*
This is because we are usning int data type which can take 232 distinct states from -2147483648 to 2147483647.It can clearly be seen
that 30000000000 in greater than the limit of this data type.In order to correct this error we have to use long data type.*/
