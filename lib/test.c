#include"stdio.h"
#include"dec.h"
main()
{
	int a,b;
	printf("enter any two numbers");
	scanf("%d %d",&a,&b);
	reverse(a);
	sum(b);
	gcd(a,b);
}
