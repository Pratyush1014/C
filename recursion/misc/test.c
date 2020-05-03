#include"stdio.h"
int alpha(int n)
{
	if(n>0)
	{
		printf("%d",n);
		alpha(n-1);
		alpha(n-1);
	}
}
int beta(int n)
{
	if(n>0)
	{
		beta(n-1);
		printf("%d",n);
		beta(n-1);
	}
}
int delta(int n)
{
	if(n>0)
	{
		delta(n-1);
		delta(n-1);
		printf("%d",n);
	}
}
main()
{
	alpha(3);
	printf("\n");
	beta(3);
	printf("\n");
	delta(3);
}

