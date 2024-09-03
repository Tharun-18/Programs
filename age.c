#include<stdio.h>
int main()
{
	int age;
	printf("enter your age:");
	scanf("%d",&age);
	if(age>18)
		printf("Eligible for driving licence.");
	else
		printf("Not eligible for driving licence.");
	return 0;
}
