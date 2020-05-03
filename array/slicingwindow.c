#include"stdio.h"
#include"string.h"
int greatest (int x[],int n)
{
	int m=0,i;
	for(i=0;i<n;i++)
	{
		if(m<x[i])
		{
			m=x[i];
		}
	}
	return m;
}
main()
{
	int i;
	int x[]={1,3,4,5,6,2,5,8,7,-2,-6};
	int m=0,sum=0;
	int s;
	int j;
	printf("Enter slicing index");
	scanf("%d",&s);
	for(i=0;i<11;i++)
	{
		int y[s];
		for(j=0;j<s;j++)
		{
			y[j]=x[i];
			i++;
		}
		m=greatest(y,sizeof(y)/sizeof(int));
		sum=sum+m;
		i=i-s+1;
	}
	printf("%d ",sum);
}
