#include"stdio.h"
#include"stdlib.h"
#include"string.h"
struct Node
{
	int data;
	struct Node* link;
};
main()
{
	char x[4];
	struct Node *p,*q;
	p=(struct Node *)malloc(sizeof(struct Node));
	printf("Enter data");
	scanf("%d",&p->data);
	struct Node *head=p;
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
	do
	{
		printf("%d \n",head->data);
		head=head->link;
	}while(head!=NULL);
}
		
		
