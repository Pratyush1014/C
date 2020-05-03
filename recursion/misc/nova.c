#include"stdio.h"
int alpha();
main()
{
	int k=10;
	alpha();
}
int alpha()
{
	int y=1;
	printf("%d",*(&y+7));
}
