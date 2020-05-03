#include"stdio.h"
int fact( int n )
{
	int i=1;
	while(n>0)
	{
		i=i*n;
		n--;
	}
	return i;
}
main()
{
	int n,s,t,r;
	for(n=1;n<=1000;n++)
	{
		t=n;
		r=0;
		while(t>0)
		{
			s=t%10;
			r=r+fact(s);
			t=t/10;
		}
		if(n==r){
			printf("%d",r);
			printf("\n");}
		else
			continue;
	}
}
