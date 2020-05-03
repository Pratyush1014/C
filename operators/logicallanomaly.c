#include"stdio.h"
main()
{
	int a=5,b=3;
	//(a==5 || b=10) ? printf("hi") : printf("bye");	printing this shows an error mssg i.e invalid lvalue assignment
	(a==5 || (b=10)) ? printf("%d",b) : printf("%d",b);
}                                                    
