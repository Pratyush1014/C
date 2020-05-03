#include"stdio.h"
main()
{
	FILE *p,*q;
	p=fopen("/home/litindia/text.txt","r");
	q=fopen("temp.txt","w");
	char x;
	while((x=getc(p))!=EOF)
	{
		if(x>=97 && x<=122)
			putc (x-32,q);
		else
			putc (x,q);
	}
	rename("temp.txt","text.txt");
}
