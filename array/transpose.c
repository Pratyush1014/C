#include"stdio.h"
#include"string.h"
void transpose (int x[4][5],int r,int c)
{
	int i,j;
	int y[c][r];
	memset (y,0,sizeof(y));
	for(j=0;j<c;j++)
		{
			for(i=0;i<r;i++)
			{
				y[j][i]=x[i][j];
			}
		}
	for(i=0;i<c;i++)
                {
                        for(j=0;j<r;j++)
                        {
                                printf("%d ",y[i][j]);
                        }
			printf("\n");
                }
}
main()
{
	int x[4][5]=  {	1,2,3,4,5,
			6,7,8,9,10,
			11,12,13,14,15,
			16,17,18,19,20};
	transpose(x,4,5);
}
