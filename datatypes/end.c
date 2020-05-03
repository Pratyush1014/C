#include"stdio.h"
main()
{
	int x=876;
	unsigned char *a=(unsigned char *) &x;
	printf("%d ",a[0]);
	printf("%d ",a[1]);
	printf("%d ",a[2]);
	printf("%d ",a[3]);
}
