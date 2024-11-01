/* You are required to design a calculator utilizing an array. Take a string from the
user i.e. 20+10-30 and store it in an array. Traverse through the array, if there are
values stored them in some variable and if an operation comes perform the
necessary operation and if a null character comes display the result. If the null
character comes after the operator, the program should print an invalid
expression. (Note: Only do this for + and - operator) */

#include<stdio.h>

int main (){
    int result=0,num=0,i,size;
	char equation[100];
	char operator= '+';
	
	printf("It is the simple calculator that performs Addition and Subtraction only");
	printf("\nEnter the equation : ");
	scanf("%s",&equation[0]);
	size= sizeof(equation)/sizeof(equation[0]);
    // if(equation[size]<'0'||equation[size]>'9'){
    //     printf("invalid input.\t syntax error");
    // }


	for(i=0;i<size;i++){
		if(equation[i]>='0'&&equation[i]<='9')
		num=num*10+(equation[i]-48);
		else if (equation[i]=='+'||equation[i]=='-')
		   { if(i==0){
		        result=num;}
		    else {
                result=result+num;}
		        num=0;
		   if(equation[i]=='-'){
		   	    result=result-num;
		   	    operator='-';
		    }
		}
	} 
    if (operator=='+')
	    result=result+num;
    else if(operator=='-')
	    result=result-num;
	
    printf("%d",result);
    return 0;
}
	
          




