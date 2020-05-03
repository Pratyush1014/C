#include"stdio.h"
main()
{
	int basic,ta,da,hra,gross;
	float pf,net;
	while(1)
	{
		printf("Enter the base salary");
		scanf("%d",&basic);
		if(basic<3000)
		{
			printf("invalid input");
			continue;///control flows to the beginning of loop
		}
		else
		if(basic>=15000)
		{
			ta=1000;
			da=2000;
			hra=5000;
			pf=0.03;
			gross=basic+ta+da+hra;
			net=gross-gross*pf;
			printf("gross is %d\n",gross);
			printf("net is %f\n",net);
		}
		else
		if(basic>=10000)
		{
			ta=100;
			da=1000;
			hra=3000;
			pf=0.02;
			gross=basic+ta+da+hra;
			net=gross-gross*pf;
			printf("gross is %d\n",gross);
			printf("net is %f \n",net);
		}
		else
		{
			ta=0;
			da=0;
			hra=3000;
			pf=0.02;
			gross=basic+ta+da+hra;
			net=gross-gross*pf;
			printf("gross is %d\n",gross);
			printf("net is %f\n",net);
		}
	}
}
		
				
