#include"stdio.h"
main()
{
	char n;
	printf("enter any number");
	scanf("%c",&n);
	if(n&128==128)
		printf("signed bit is on");

	else
		printf("signed bit is off");
}
	
	
