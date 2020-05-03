#include"stdio.h"
void fact(int n)
{
	int r;
	r=1;
	while(n>0)
	{
		r=r*n;
		n--;
	}
	printf("%d",r);
}
main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	void (*p)()=fact;
	(*p)(n);
}
