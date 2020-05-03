#include"stdio.h"
main()
{
	int a=0,b=1;
	int n,c,i;
	printf("enter the series limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d  ",c);
	}
}	
