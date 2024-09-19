#include <stdio.h>
int main()
{
	int k=35;		//Order of execution is not guaranteed by the compiler// 
	printf("\n%d\t%d\t%d\t%d",k==35,k=35,k>40,k=50);
return 0;

}

