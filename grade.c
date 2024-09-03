#include<stdio.h>
int main()
{
	int maths,rdbms,sdm,fc,c,sum,per;
	printf("Enter 5 subject marks:");
	scanf("%d %d %d %d %d",&maths,&rdbms,&sdm,&fc,&c);
	sum=maths+rdbms+sdm+fc+c;
	per=sum*100/500;
	if(per>80)
		printf("Grade A");
	else if(per>60)
		printf("Grade B");
	else if(per>40)
		printf("Grade C");
	else
		printf("Grade D");
	return 0;
}
