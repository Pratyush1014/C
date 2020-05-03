#include"stdio.h"
#include"stddef.h"
#include"stdlib.h"
struct Node
{
	int data;
	struct Node * link;
};
struct Node *head;
void display();
main()
{
	char x[4];
	struct Node *p,*q;
	p=(struct Node *)malloc(sizeof(struct Node));
	head = p;
	printf("Enter data for the first node");
	scanf("%d",&p->data);
	while(1)
	{
		printf("Do you wanna continue");
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
}
void display()
{
	while(head!=0)	
	{
		printf("%d ",head->data);
		head=head->link;
	}
	
}
