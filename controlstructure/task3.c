#include"stdio.h"
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
	int i,l;
	int sumsq,sumno;
	for(i=1;i<=100;i++)
	{
		sumsq=sum(i*i);
		sumno=sum(i);
		l=sumno*sumno;
		if(sumsq==l)
			printf("%d  ",i) ;
		else 
			continue;
	}
}
