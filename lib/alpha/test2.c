#include"stdio.h"
#include"alpha.h"
main()
{
	int n;
	int m;
	printf("enter any two numbers");
	scanf("%d %d",&n,&m);
	int x,y,z;
	z=gcd(n,m);
	printf("%d\n",z);
	y=reverse(n);
	printf("%d\n",y);
	x=prime(m);
	if(x==2)
		printf("%d is prime",m);
	else
		printf("%d is composite",m);
}
