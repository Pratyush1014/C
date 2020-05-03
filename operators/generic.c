#include"stdio.h"
main()
{
	int n;
	printf("Enter any number");
	scanf("%d",&n);
	(n%9)==0 ? printf("9 is the generic root") : printf("%d",(n%9));
}
