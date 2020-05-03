#include"stdio.h"
main()
{
	unsigned char a[] = {108,3,0,0};
	int *p =(int *) &a ;
	printf("%d",*p);
}
