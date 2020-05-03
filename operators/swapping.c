#include"stdio.h"
main()
{
	int a,b;
	printf("enter any two numbers of your desired choice");
	scanf("%d %d",&a,&b);
	a^=b^=a^=b;
	printf("a=%d b=%d",a,b);
}
