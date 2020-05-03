#include"stdio.h"
main()
{
	int n,i,sum=0;
	printf("enter any number");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		sum=sum+i;
		n=n/10;
	}
	printf("sum of the digits is %d",sum);
}
