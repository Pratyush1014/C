#include"stdio.h"
#include"stddef.h"
#include"stdlib.h"
struct Node
{
	int data;
	struct Node * link;
};
struct Node * start;
void display();
void delete();
main()
{
	char x[4];
	struct Node*p,*q;
	p=(struct Node *)malloc(sizeof(struct Node));
	start = p;
	printf("Enter data for the first node");
	scanf("%d",&p->data);
	while(1)
	{
		printf("do you wanna continue");
		scanf("%s",x);
		if(strcmp(x,"no")==0){break;}
		q=(struct Node *)malloc(sizeof(struct Node));
		printf("Enter data");
		scanf("%d",&q->data);
		p->link=q;
		p=q;
	}
	p->link=0;
	display();	
	delete();
	display();
}
void display()
{
	struct Node * str;
	str = start;
	while(str!=0)
	{
		printf("%d",str->data);
		str=str->link;
	}
}
void delete()
{
	int n;
	printf("Node num you want to delete");
	scanf("%d",&n);
	struct Node *temp1,*temp2;
	temp1=start;
	int i;
	for(i=1;i<n-1;i++)
	{
		temp1 = temp1->link;
	}
	temp2=temp1->link;
	temp2=temp2->link;
	temp1->link=temp2;
}
