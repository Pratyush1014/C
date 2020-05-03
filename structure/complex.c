#include"stdio.h"
struct complex
{
	int  real;
	int  img;
};
void sum(struct complex p,struct complex q)
{
	int r,i;
	r=p.real + q.real;
	i=p.img +q.img;
	printf("%d + i%d",r,i);
}
main()
{
	struct complex p={10,12};
	struct complex q={23,45};
	sum(p,q);
}
