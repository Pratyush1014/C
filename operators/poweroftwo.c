#include"stdio.h"
main()
{
	int n;
	printf("enter a number of your desired choice");
	scanf("%d",&n);
	(n&(n-1))==0 ? printf("yes its a power of two") : printf("nope its not") ;
}
