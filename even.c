#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the range:");
	scanf("%d",&n);
	printf("the even number between 1 to %d:",n);
	for(i=2;i<=n;i++)
	{
        if(i%2==0)
	{
		printf("%d\n",i);
	}
	}
	return 0;
}
