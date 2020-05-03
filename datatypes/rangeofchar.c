#include"stdio.h"
main()
{
	unsigned char x;
	x=0;
	while(1)
	{
		printf("%d\n",x);
		x++;
		usleep(1000);
	}
	signed char y;
	y=0;
	while(1)
	{
		printf("%d\n",y);
		y++;
	}
}
