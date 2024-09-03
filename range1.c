#include<stdio.h>
int main()
{
	int i,n;
	printf("range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		printf("%d x 3 = %d\n",i,i*3);
	return 0;
}
