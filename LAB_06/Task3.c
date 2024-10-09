#include <stdio.h>
int main ()
{
    int N,i,sum=0,f=0,s=1;
    printf("Enter the Number of Terms\n");
    scanf("%d",&N);
   for (i=0;i<N-3;i++)
    {
        switch (N){
        	case 1:
            	printf("0");
            	break;
        default:
        	switch (i) {
        		case 0:
        			printf("%d %d",f,s);
        			sum=f+s;
            		printf(" %d ",sum);
           	 		f=s;
            		s=sum;
				default :
					sum=f+s;
            		printf(" %d ",sum);
            		f=s;
            		s=sum;
            	}
        }}
    return 0;
    }
