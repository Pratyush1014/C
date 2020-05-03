#include"stdio.h"
main()
{
	int i,n,j;
	int st=1;
	int sp;
	printf("enter the total number of rows");
	scanf("%d",&n);
	sp=n-1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for(j=1;j<=st;j++)
		{
			printf("*");
		}
		sp=sp-1;
		st=st+2;
		printf("\n");
	}
	sp=1;
	st=n+(n-1)-2;
        for(i=n-1;i>0;i--)
        {
                for(j=1;j<=sp;j++)
                {
                        printf(" ");
                }
                for(j=1;j<=st;j++)
                {
                        printf("*");
                }
                sp=sp+1;
                st=st-2;
                printf("\n");
        }

}
