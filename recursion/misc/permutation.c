#include"stdio.h"
void permute(int a[],int n)
{
	static int i=0,j=0,k=0;
	if (i<n)
	{
		while(j<n)
		{
			while(k<n)
			{
				if(i!=j && j!=k && k!=i)
					printf("%d %d %d\n",a[i],a[j],a[k]);
				k++;
			}
			k=0;
			j++;
		}
		j=0;
		i++;
	}
}
main()
{
	int n = 3;
	int a[]={1,2,3};
	permute(a,3);
}
