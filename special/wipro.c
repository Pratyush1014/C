#include"stdio.h"
main()
{
	int n,t;
	printf("Enter the number of numbers");
	printf("\n");
	scanf("%d",&n);
	int a[n];
	int i;
	for (i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	for (i=0;i<n;i++)
		{
			while(a[i]!=0)
			{
				t=a[i]%10;
				if(t%2==0)
				{
					a[i]=a[i]/10;
					printf("%d",t);
				}
				else
				{
					a[i]=a[i]/10;
					continue;
				}
			}
			printf("\n");
		}
}
