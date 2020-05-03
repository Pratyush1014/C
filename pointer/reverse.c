#include"stdio.h"
int * rev (int *n)
{
	int *r=malloc(4);
	*r=0;
	while(*n>0)
	{
		*r=*r * 10 +*n%10;
		*n=*n/10;
	}
	return r;
}
main()
{
	printf("enter any number");
	int a;
	scanf("%d",&a);
	int x;
	x=*rev(&a);
	printf("%d",x);
}
