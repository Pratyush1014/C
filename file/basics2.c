#include"stdio.h"
#include"stdlib.h"
main()
{
	FILE *a,*b;
	//To create a file and write some data into it
	a=fopen("letter.txt","w");
	fprintf(a,"Hello, World");
	fclose(a);
	//To copy the contents of one file to the other
	a=fopen("letter.txt","r");
	b=fopen("dupletter.txt","w+");
	char c;
	while((c=fgetc(a))!=EOF)
	{
		putc(c,b);
	}
	fclose(b);
	//To dispaly the contents of a file
	b=fopen("dupletter.txt","r");
	char x;
	while((x=fgetc(b))!=EOF)
	{
		printf("%c",x);
	}
	fclose(a);
	fclose(b);
}
