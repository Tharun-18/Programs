#include<stdio.h>
int main()
{
	int i1,i2,i3,i4,i5,i6,ec,lc,sum;
	printf("enter the 3 entering currents:");
	scanf("%d %d %d",&i1,&i2,&i3);
	printf("enter the 3 leaving current:");
	scanf("%d %d %d",&i4,&i5,&i6);
	ec=i1+i2+i3;
	lc=i4+i5+i6;
	sum=ec-lc;
	printf("%d",sum);
	if(sum==0)
		printf("It follows kirchhoff law.");
	else
		printf("It won't follows kirchhoff law.");
	return 0;
}
