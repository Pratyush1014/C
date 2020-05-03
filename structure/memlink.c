#include"stdio.h"
struct student
{
	int roll;
	char name [20];
	struct student *link;
}
main()
{
	struct student p,q,r,s;
	p.link=&q;
	q.link=&r;
	r.link=&s;
	s.link=0;
}
