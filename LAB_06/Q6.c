#include <stdio.h>
int main(void)
{
	int i;
	for (i=0 ;i<=6 ;i++)
	{
		if (i==0 || i==6)
			printf("*         *\n");
		else 
			printf("* * * * * *\n");	
	}
}
