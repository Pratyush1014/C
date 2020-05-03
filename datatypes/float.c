#include"stdio.h"
main()
{
	float x=14.7;
	unsigned char *p=(unsigned char *)&x;
	printf("%d",p[0]);
	printf("%d",p[1]);
	printf("%d",p[2]);
	printf("%d",p[3]);
}
