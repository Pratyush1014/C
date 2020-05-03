#include"stdio.h"
#include"stddef.h"
#include"stdlib.h"
struct Node
{
	int data;
	struct Node * link;
};
struct Node *start ;
void insert(struct Node *);
void display();
main()
{
	char x[4];
	struct Node * p;
	p=(struct Node *)malloc(sizeof(struct Node *));
	start = p;
	printf("Enter data for the first node");
	scanf("%d",&p->data);
	while(1)
	{
		printf("Do you wanna continue");
		scanf("%s",x);
		if(strcmp(x,"no")==0){break ;}
		struct Node *q=(struct Node *)malloc(sizeof(struct Node));
		printf("Enter data");
		scanf("%d",&q->data);
		p->link=q;
		p=q;
	}
	p->link=NULL;
	display();
	struct Node * head=start;
	insert(head);
	display();
	
}
void display()
{
	struct Node * str;
	str=start;
	while(str!=0)
	{
		printf("%d ",str->data);
		str = str->link;
	}
}
void insert(struct Node * head)
{
	struct Node * temp;
	temp=head;
	int pos;
	printf("Enter the pos where you want to insert a node");
	scanf("%d",&pos);
	int info;
	int i;
	for(i=1;i<pos;i++)
	{
		temp=head->link;
		head = temp;
	}
	temp=temp->link;
	struct Node *r=(struct Node *)malloc(sizeof(struct Node*));
	printf("Enter info to be inserted");
	scanf("%d",&r->data);
	head->link=r;
	r->link=temp;
}
