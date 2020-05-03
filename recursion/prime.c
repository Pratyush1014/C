#include"stdio.h"
int prime(int n)
{
	static int i=1,c=0;
	if(i<=n)
	{
		if(n%i==0)
		{
			c++;
		}
		i++;
		prime(n);
	}
	return c;
}
main()
{
	int n,x;
	printf("enter any number");
	scanf("%d",&n);
	x=prime(n);
	if(x==2)
		printf("number is prime");
	else
		printf("composite");
}
