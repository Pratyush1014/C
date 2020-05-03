#include"stdio.h"
main()
{
	int n,x;
	printf("enter the percentage");
	scanf("%d",&n);
	x=n/10;
	switch(x)
	{
		case 10:
		case 9:
		case 8:
		case 7:
		case 6:
			printf("first");
			break;
		case 5:
			printf("second");
			break;
		case 4:
			printf("third");
			break;
		default:
			printf("fail");
	}
}
