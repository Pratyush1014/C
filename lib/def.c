#include"stdio.h"
int gcd (int a,int b)
{
	int c;
	while((c=a%b)!=0)
	{
		a=b;
		b=c;
	}
	printf("gcd of two numbers is %d",b);
}
int reverse(int a)
{
	int r=0;
	while(a>0)
	{
		r=r*10+a%10;
		a=a/10;
	}
	printf("reversed number is %d",r);
}
int sum(int a)
{
	int r=0;
	while(a>0)
	{
		r=r+a%10;
		a=a/10;
	}
	printf("sum of digits of the number is %d",r);
}
