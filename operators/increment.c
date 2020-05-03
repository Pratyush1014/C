#include"stdio.h"
main()
{
	int i;
	i=2;
	if(i++ == ++i)		//eventhough == has a precedence rule associated with it, it kind of divides the statement into two parts and treats them differently
		printf("both of'em are same");
	else
		printf("both of'em are different");
	printf("%d",i);	//but i value would be incremented twice
}
