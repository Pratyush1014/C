#include"stdio.h"
main()
{
	int a,b;
	printf("enter any two numbers of your desired choice");
	scanf("%d %d",&a,&b);
	printf("smallest number is %d ",((a+b)-abs(a-b))/2);
	printf("\n");
	printf("largest number is %d ",((a+b)+abs(a-b))/2);
}
