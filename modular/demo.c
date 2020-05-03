#include"stdio.h"
int gcd(int n,int m)
{
	int c;
	while((c=a%b)!=0)
	{
		a=b;
		b=c;
	}
	return b;
}
int sum(int n)
{
	int r=0;
	while(n>0)
	{
		r=r+n%10;
		n=n/10;
	}
	return r;
}
main()
{
	int i,j,k;
	k=sum(j);
	

