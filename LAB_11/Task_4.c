/*Create a program that defines a structure Student with fields roll_no, name, and
another nested structure Marks (fields: maths, science, and english). Use an array of
Student to store data for 5 students and calculate the average marks for each student.*/

#include <stdio.h>
typedef struct{
    float maths,science,english;
    } marks;
typedef struct{
    int roll_no;
    char name[20];
    marks scores;
} student;


int main(){
    int i;
    student s1[5];
    for(i=0;i<5;i++){
        printf("\nEnter your Roll Number:\t");          scanf("%d",&s1[i].roll_no);
        printf("\nEnter your NAME:\t");                 scanf("%s",s1[i].name);
        printf("\nEnter your MATHS's MARKS:\t");        scanf("%f",&s1[i].scores.maths);
        printf("\nEnter your Science's MARKS:\t");      scanf("%f",&s1[i].scores.science);
        printf("\nEnter your English's MARKS:\t");      scanf("%f",&s1[i].scores.english);
    }
    for(i=0;i<5;i++){
        float avg=0;
        printf("\nNAME:\t");                          printf("%s",s1[i].name);
        printf("\nRLLO_NO:\t");                       printf("%d",s1[i].roll_no);
        avg=((s1[i].scores.maths)+(s1[i].scores.science)+(s1[i].scores.english))/3;
        printf("\nYour average score is %.2f\n",avg);
    }
    

    
}