#include"stdio.h"
main()
{
	int n;
	int c=0;
	printf("enter any number");
	scanf("%d",&n);
	while(n>0)
	{
		n=n & n-1;
		c++;
	}
	printf("%d",c);
}
