#include"stdio.h"
#include"stdlib.h"
main()
{
	FILE *p;
	p=fopen("/home/litindia/Desktop/letter.txt","r");
	if(p==0){printf("File or path not found");exit (0);}
	char x;
	while((x=getc(p))!=EOF)
	{
		printf("%c",x);
	}
	fclose(p);
	//counting
	int l=0,s=0,c=0;
	char y;
	p=fopen("/home/litindia/Desktop/letter.txt","r");
	while((y=getc(p))!=EOF)
	{
		if(y==' '){s++;}
		else
		if(y=='\n'){l++;}
		else
		c++;
	}
	printf("No of characters %d",c);
	printf("No of words %d",s+l);
	printf("No of lines %d",l);
}
