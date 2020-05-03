#include"stdio.h"
main()
{
	int a,b;
	printf("enter any two numbers");
	scanf("%d %d",&a,&b);
	int c;
	while((c=(a%b))!=0)
	{
		a=b;
		b=c;
	}
	printf("%d ",b);
}	
