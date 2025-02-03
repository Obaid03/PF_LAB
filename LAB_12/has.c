#include<stdio.h>
void printrow(int current,char A);
void pyramid(int row,int current);
int main(){
pyramid(9,0);
}
void printrow(int current,char A){

if(current==0)
return;
else{
    printf("%c",A);
    return printrow(current-1,A+1);
}
}
void pyramid(int row,int current){
    if(current>row){
        return ;
    }
    else{
        printrow(current,'A');
        printf("\n");
        return pyramid(row,current+1); 
    }
}
