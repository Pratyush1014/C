#include"stdio.h"
main()
{
	int n,s;
	int a=0,b;
	printf("enter any number");
	scanf("%d",&n);
	b=n;
	while(n>0)
	{
		s=n%10;
		if(a<s)
			a=s;
		if(b>s)
			b=s;
		n=n/10;
	}
	printf("%d",a+b);
}
