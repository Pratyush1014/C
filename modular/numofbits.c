#include"stdio.h"
void bits(int n)
{
	int c=0;
	while(n>0)
	{
		c++;
		n=n&(n-1);
	}
	printf("Number of bits in the given number is %d",c);
}
main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	bits(n);
}
