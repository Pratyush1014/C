#include"stdio.h"
main()
{
	int i,j,k,n,sum=0;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			for(k=1;k<=3;k++)
			{
				if(i!=j && j!=k && k!=i)
				{
					n=i*100+j*10+k;
					printf("%d",n);
					printf("\n");
					sum=sum+n;
				}
			}
		}
	}	
	printf("%d",sum);
}
	

