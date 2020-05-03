#include"stdio.h"
#include"string.h"
int ** input(int p[5][5])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&p[i][j]);
		}
	}
	 for(i=0;i<5;i++)
        {
                for(j=0;j<5;j++)
                {
                        printf("%d ",p[i][j]);
                }
		printf("\n");
        }
	return p;
}
void mult(int **p,int **q)
{
	int i,k,j;
	int z[5][5];
	memset(z,0,sizeof(z));
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			for(k=0;k<5;k++)
			{
				z[i][j]=z[i][j] + p[i][k]*q[k][j];
			}
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",z[i][j]);
		}
		printf("\n");
	}
}
main()
{
	int x[5][5];
	int y[5][5];
	input(x[5][5]);
	input(y[5][5]);
	mult(x,y);
}
