#include"stdio.h"
main()
{
	int i,n,j,c=0;
	int sp;
	printf("enter the total number of rows");
	scanf("%d",&n);
	sp=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*sp-1;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
			printf("*");
		}
		for(j=i-1;j>0;j--)
		{
			printf("%d",j);
			//if (j==1){continue;}
			printf("*");
		}
		sp=sp-1;
		printf("\n");
	}

}
