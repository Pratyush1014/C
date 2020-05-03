#include"stdio.h"
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
	}
	return c;
}

main()
{
	int i,x;
	for(i=1;i<=100;i++)
	{
		x=prime(i);
		if(x==2)
			printf("%d ",i);
	}
}

