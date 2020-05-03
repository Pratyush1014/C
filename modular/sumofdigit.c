#include"stdio.h"
void sum(int n)
{
	int r=0;
	while(n>0)
	{
	r=r+n%10;
		n=n/10;
	}
	printf("sum of the digits of the number is %d",r);
}
main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	sum(n);
}
