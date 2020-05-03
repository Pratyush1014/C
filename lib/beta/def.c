#include"stdio.h"
#include"stdlib.h"
int * gcd(int *a,int *b)
{
	int *c=(int*)malloc(4);
	while((*c=*a%*b)!=0)
	{
		*a = *b;
		*b = *c;
	}
	return b;
}
int * reverse(int *p)
{
	int *r=(int*)malloc(4);
	*r=0;
	while(*p>0)
	{
		*r=*r + *p%10;
		*p/=10;
	}
	return r;
}
int * fact(int *p)
{
	int *r=(int*)malloc(4);
	*r=1;
	while(*p>0)
	{
		*r=(*r)*(*p);
		(*p)--;
	}
	return r;
}
int * sum(int *p)
{
        int *r=(int *)malloc(4);
        *r=0;
        while(*p>0)
        {
                *r=*r*10 + *p%10;
                *p/=10;
        }
        return r;
}
int * bits(int *p)
{
	int *c=(int*)malloc(4);
	*c=0;
	while(*p>0)
	{
		(*c)++;
		*p=(*p)&((*p)-1);
	}
	return c;
}
int *display (int n)
{
	int i;
	int *p=(int*)malloc(4*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	return p;
}
