#include"stdio.h"
int prime(int n)
{
	int i=1;
	int c=0;
	while(n%i==0)
	{
		c++;
		i++;
	}
	return c;
}
main()
{
	int n;
	printf("enter ");
	scanf("%d",&n);
	int x;
	x=prime(n);
	if(x==2)
		printf("prime");
	else
		printf("composite");
}

