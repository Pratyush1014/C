#include"stdio.h"
int reverse (int n)
{
	int r=0;
	while(n>0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	return r;
}
main()
{
	int n;
	printf("enter any number");
	scanf("%d",&n);
	int x;
	x=reverse(n);
	if(x==n)
		printf("the number is a palindrome number");
	else
		printf("not a palindrome");
}
