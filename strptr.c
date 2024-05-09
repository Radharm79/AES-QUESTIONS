/*Structures: Structure pointer */
#include<stdio.h>
int main()
{
	struct student
	{
		char name[100],b;
		int  age;
		float percentage; 
	}s;
	struct student *ptr;
	ptr=&s;
	printf("Enter data of student:");
	gets(ptr->name);
	scanf("%d%f",&ptr->age,&ptr->percentage);
	printf("%s%d%f",ptr->name,ptr->age,ptr->percentage); 
}