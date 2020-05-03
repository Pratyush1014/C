#include"stdio.h"
main()
{
	int (*p)();
	p=printf;
	(*p)("hello");
}
