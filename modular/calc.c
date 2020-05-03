#include"stdio.h"
int sum(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
int mult(int a,int b)
{
	int c;
	c=a*b;
	return c;
}
int div(int a,int b)
{
	int c;
	c=a/b;
	return c;
}
main()
{
	int (*p[3])(int ,int )={sum,mult,div};
	int a=5,b=9,c=8,d=2;
	int k;
	k=(*p[0])(((*p[1])(a,b)),((*p[2])(c,d)));
	printf("%d",k);
}
