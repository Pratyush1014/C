#include"stdio.h"
int * gcd (int *a,int *b)
{
	int *c=(int *)malloc(4);
	while((*c=*a%*b)!=0)
	{
		*a=*b;
		*b=*c;
	}
	return b;
}
main()
{
	int a,b;
	printf("enter any two numbers");
	scanf("%d%d",&a,&b);
	int *c=malloc(4);
	*c=*gcd(&a,&b);
	printf("%d",*c);
}
