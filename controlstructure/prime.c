#include"stdio.h"
main()
{
	int n,i,c=0;
	printf("enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			c++;
		else
			continue;
	}
	if(c==2)
		printf("Prime");
	else
		printf("not prime");
}

