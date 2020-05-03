#include"stdio.h"
struct student
{
	int roll;
	char name[20];
	struct student *link;
}
main()
{
	struct student *p,*q,*r,*s;
	p=(struct student *)malloc(sizeof(struct student));//creating nodes 
	q=(struct student *)malloc(sizeof(struct student));
	r=(struct student *)malloc(sizeof(struct student));
	s=(struct student *)malloc(sizeof(struct student));
	p->link=q;//memory linking
	q->link=r;
	r->link=s;
	s->link=NULL;
	
}
