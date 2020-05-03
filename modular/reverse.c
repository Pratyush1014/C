#include"stdio.h"
void reverse(int );
main()
{
	int n;
	printf("enter a number to be reversed");
	scanf("%d",&n);
	reverse(n);
}
void reverse(int n)
{
	int r;
	r=0;
	while(n>0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	printf("the reversed number is %d",r);
}
