#include"stdio.h"
#include"stdlib.h"
struct student
{
	int roll;
	char name[20];
	struct student *link;
};

void posfromlastnode(struct student *,int );
struct student *create_linklist();
void traverse(struct student *);
main()
{
	struct student *p;
	p=create_linklist();
	traverse(p);
	printf("Enter the pos from last");
	int n;
	scanf("%d",&n);
	posfromlastnode(p,n);
}
void posfromlastnode(struct student *p,int n)
{
	int i;
	struct student *q=p;
	for(i=1;i<n;i++)
	{
		q=q->link;
	}
	while(q->link!=0)
	{
		p=p->link;
		q=q->link;
	}
	printf("%d %s\n",p->roll,p->name);
}
void traverse(struct student *p)
{
	while(p!=0)
	{
		printf("%d %s\n",p->roll,p->name);
		p=p->link;
	}
}
struct student * create_linklist()
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
		scanf("%d",&p->roll);
		printf("Enter name : ");
		scanf("%s",p->name);
	}
	p->link=0;//if temp then circular linklist
	return temp;
}
