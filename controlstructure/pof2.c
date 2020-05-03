#include"stdio.h"
main()
{
	int i;
	int t;
	for(i=1;i<=100;i++)
	{
		t=i & i-1;
		if(t==0)
			{
				printf("%d",i);
				printf("\n");
			}
		else
			continue;
	}
}	
