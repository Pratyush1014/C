#include"stdio.h"
main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	int i,r=0;
	while(n>0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	printf("reverse is %d",r);
}
