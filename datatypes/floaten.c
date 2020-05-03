#include"stdio.h"
main()
{
	unsigned char a[]={51,51,107,65};
	float *p=(float *)&a;
	printf("%f",*p);
}
	
