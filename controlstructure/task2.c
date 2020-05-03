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
	int i;
	int sumsq,sumno;
	for(i=1;i<=100;i++)
	{
		sumsq=sum(i*i);
		sumno=sum(i);
		if(sumsq==sumno)
			printf("%d  ",i) ;
		else 
			continue;
	}
}
