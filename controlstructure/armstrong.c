#include"stdio.h"
#include"math.h"
int arms( int n )
{
	int m;
	m=n;
	int i=0,c=0;
	while(m>0)
	{
		c++;
		m=m/10;
	}
	while(n>0)
	{
		i=i+pow((n%10),c);
		n=n/10;
	}
	return i;
}
main()
{
	int n,s,t,r;
	for(n=1;n<=10000;n++)
	{
		t=n;
		r=arms(n);
		if(n==r){
			printf("%d",r);
			printf("\n");}
		else
			continue;
	}
}
