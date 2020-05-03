#include"stdio.h"
main()
{
	int x,y;
	x=5;
	y=5;
	printf("%d",x++ + x++ + x++ + x++);
	printf("\n");
	printf("%d",++y + ++y + ++y);
	printf("\n");
	printf("%d %d",x,y);//here x and y are incremented thrice so the value of x is 8 and y is 8
}
