#include"stdio.h"
int max(int,int);
main()
{
	int a,b;
	printf("enter any two numbers");
	scanf("%d %d",&a,&b);
	
	int x;
	x=max(a,b);
	printf("%d",x);
}
int max(int a,int b)
{
	return a>b?a:b;//a>b?return a:return b this cant be used cause return statement cant be used in the middle
}
