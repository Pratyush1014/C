#include"stdio.h"
void disp(int n)
{
	static int i=1;
	if(i<=n)
	{
		printf("%d",i);
		i++;
		disp(n);
	}
}
main()
{
	int n;
	scanf("%d",&n);
	disp(n);
}

