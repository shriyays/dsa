//to display student's admission date, semester and aggregate marks using multiple structures and display contents.
#include<stdio.h>
#include<stdlib.h>

typedef  struct date
{
	int day;
	int month;
	int year;
}date_t;

typedef struct marks
{
	int s1;
	int s2;
	int s3;
	int s4;
	int s5;
	int s6;

}marks_t;


typedef struct student
{
	date_t d;
	int sem;
	marks_t m;
	
}student_t;

int main()
{
	student_t S;
	
	printf("Enter the admission date(dd/mm/yyyy):");
	scanf("%d/%d/%d",&S.d.day,&S.d.month,&S.d.year);
	
	printf("Enter Semester:");
	scanf("%d",&S.sem);
	
	printf("Enter marks for subject 1:");
	scanf("%d",&S.m.s1);
	printf("Enter marks for subject 2:");
	scanf("%d",&S.m.s2);
	printf("Enter marks for subject 3:");
	scanf("%d",&S.m.s3);
	printf("Enter marks for subject 4:");
	scanf("%d",&S.m.s4);
	printf("Enter marks for subject 5:");
	scanf("%d",&S.m.s5);
	printf("Enter marks for subject 6:");
	scanf("%d",&S.m.s6);
	
	int sum;
	sum = S.m.s1+S.m.s2 +S.m.s3+S.m.s4+S.m.s5+S.m.s6;
	
	printf("-----STUDENT DETAILS-----\n");
	printf("ADMISSION DATE : %d/%d/%d \n",S.d.day,S.d.month,S.d.year);
	printf("SEMESTER : %d \n", S.sem);
	printf("AGGREGATE MARKS : %d \n", sum);
	
	return 0;
	
}
	
	
