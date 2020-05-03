#include"stdio.h"
main()
{
	int x;
	printf("enter the number of working hours");
	scanf("%d",&x);
	if(x<8 || x>16)
		printf("invalid entry please try again");
	else
	if(x==8)
		{
	//	wage=350;
		printf("amount=%d",350);
		}
	else
	if(x>8 && x<=12)
		printf("wage is %d",350+(x-8)*100);
	else
	if(x>12 &&x<=16)
		printf("wage is %d",350 + (x-12)*200);
}
