#include"stdio.h"
int gcd (int ,int );
main()
{
	int a,b;
	printf("enter any two numbers");
	scanf("%d %d",&a,&b);
	int x;
	x=gcd(a,b);
	printf("gcd is %d",x);
}
int gcd(int a,int b)
{
	int c;
	while((c=a%b)!=0)
	{
		a=b;
		b=c;
	}
	return b;
}

