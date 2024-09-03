#include<stdio.h>
int main()
{
	int age;
	printf("enter the age:");
	scanf("%d",&age);
	if(age<=5)
		printf("Niachild.");
	else if(age<=10)
		printf("Nicechild.");
	else if(age<=15)
		printf("Teenage.");
	else if(age<=25)
		printf("Young dynamic.");
	else if(age<=50)
		printf("Middle age.");
	else
		printf("Old age.");
	return 0;
}
