#include"stdio.h"
struct student
{
	int roll;
	char name[20];
	struct student *link;
}
main()
{
	struct student *p,*q,*temp;
	p=(struct student *)malloc(sizeof(struct student));//creating nodes 
	temp=p;//reference to first address
	char x[4];
	printf("Enter roll : ");
	scanf("%d",&p->roll);
	printf("Enter name : ");
	scanf("%s",p->name);
	while(1)
	{
		printf("Do you want to continue");
		scanf("%s",x);
		if(strcmp(x,"no")==0){break ;}
		q=(struct student *)malloc(sizeof(struct student));
		p->link=q;//linking of the newly created block
		p=q;//shifting head position to the new block
		printf("Enter roll : ");
		scanf("%d",&p->link);
		printf("Enter name : ");
		scanf("%s",p->name);
	}
	p->link=0;//if temp then circular linklist
	
}
