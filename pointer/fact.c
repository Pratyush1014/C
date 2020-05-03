#include"stdio.h"
int * fact (int *p)
{
	int *i=malloc(4);
	*i=1;
	while(*p>0)
	{	
		*i=*i*(*p);
		(*p)--;
	}
	return i;
}
main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	int x;
	x=*fact(&n);
	printf("%d",x);
}
