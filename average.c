#include<stdio.h>
int main()
{
	float average,a,b,c;
	printf("enter the three values:");
	scanf("%f %f %f",&a,&b,&c);
	average=a+b+c/3;
	printf("the average is:%f",average);
	return 0;
}
