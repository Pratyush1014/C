#include"stdio.h"
main()
{
	FILE *p,*q;
	p=fopen("/home/litindia/Desktop/letter.txt","r");
	q=fopen("/home/litindia/Desktop/report.txt","w");
	char x;
	while((x=getc(p))!=EOF)
	{
		putc(x,q);
	}
}
