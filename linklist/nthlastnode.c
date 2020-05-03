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
void nthnode();
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
	nthnode();
}
void display()
{
	struct Node * str;
	str = head;
	while(str!=0)	
	{
		printf("%d ",str->data);
		str=str->link;
	}
	
}
void nthnode()
{
	printf("1->from beginning \n2->from end");
	int ch,n,i;
	scanf("%d",&ch);
	if(ch==1)
	{
		struct Node * loc;
		loc=head;
		printf("enter value of n");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			loc=loc->link;
		}
		printf("%d",loc->data);
	}
	else
	{
		struct Node * loc;
		loc = head;
		printf("Enter value of n");
		scanf("%d",&n);
		for(i=1;i<n;i++)
		{
			loc=loc->link;
		}
		while(loc!=0)
		{
			loc=loc->link;
			head=head->link;
		}
		printf("%d",head->data);
	}
}
