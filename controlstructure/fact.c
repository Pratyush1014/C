#include"stdio.h"
main()
{
	int n,i=1;
	printf("enter any number");
	scanf("%d",&n);
	while(n>0)
	{
		i=i*n;
		n--;
	}
	printf("%d",i);
}
