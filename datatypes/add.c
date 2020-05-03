#include"stdio.h"
main()
{
	int a,b,c;
	while(1)
	{
		printf("enter the first number");
		scanf("%d",&a);
			if (a<0)
			{
				printf("Invalid input");
				continue;///control goes to the beginning of the loop
			}
			else
				break;///control flows out of the loop
	}
	while(1)
	{
		printf("enter the second number");
		scanf("%d",&b);
		if (b<0)
		{
			printf("Invalid input");
			continue;
		}
		else
			break;
	}
	while(1)
	{
		printf("enter the third number");
		scanf("%d",&c);
		if(c<0)
		{
			printf("Invalid input");
			continue;
		}
		else
			break;
	}
	printf("the sum of the three numbers is %d",a+b+c);
}	
