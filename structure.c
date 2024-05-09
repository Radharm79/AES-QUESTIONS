/*Structures */
#include<stdio.h>
int main()
{
	struct student
	{
		char name[100];
		int  age;
		float percentage;
		//struct address; 
	}s;
	printf("Enter data of student:");
	gets(s.name);
	scanf("%d%f",&s.age,&s.percentage);
	printf("%s\t%d\t%f",s.name,s.age,s.percentage);
}