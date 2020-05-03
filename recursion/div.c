#include"stdio.h"
int divisor (int n,int d)
{
	static int c=0;
	if(n>0)
	{
		c++;
		n=n-d;
		divisor(n,d);
	}
	return c;
}
main()
{
	int n,d;
	printf("enter any number and divisor");
	scanf("%d%d",&n,&d);
	int c;
	c=divisor(n,d);
	printf("divisor is %d",c);
}
