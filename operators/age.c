#include"stdio.h"
main()
{
	int cd,cm,cy,bd,bm,by,td,tm,ty;
	printf("enter current date");
	printf("\n");
	scanf("%d %d %d",&cd,&cm,&cy);

	printf("enter date of birth");
	printf("\n");
	scanf("%d %d %d",&bd,&bm,&by);
	if(cd>=bd)
	{
		td=cd-bd;
	}
	else
	if(cm==1||cm==3||cm==5||cm==7||cm==8||cm==10||cm==12)
	{
		cd=cd+31;
		td=cd-bd;
		cm=cm-1;
	}
	else
	if(cm==4||cm==6||cm==9||cm==11)
	{
		cd=cd+30;
		td=cd-bd;
		cm=cm-1;
	}
	else
	if(cm==2)
	{
		if(cy%4 == 0 && cy%100 == 0)
		{
			cd=cd+29;
			td=cd-bd;
			cm--;
		}
		else
		{
			cd=cd+28;
			td=cd-bd;
			cm--;
		}
	}
	if(cm>=bm)
	{
		tm=cm-bm;
	}
	else
	{
		cm=cm+12;
		cy=cy-1;
		tm=cm-bm;
	}
	ty=cy-by;
	printf("your age is %d %d %d",td,tm,ty);
}
