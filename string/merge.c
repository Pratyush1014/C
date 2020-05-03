#include"stdio.h"
#include"string.h"
char * merge (char x[],char y[])
{
	int i=0,j=0,k=0;
	char *p=malloc(strlen(x)+strlen(y)+1);
	p[strlen(x)+strlen(y)]='\0';
	while(j<strlen(x) && k<strlen(y))
	{
		p[i]=x[j];
		p[i+1]=y[k];
		j++;
		k++;
		i=i+2;
	}
	while(j<strlen(x))
	{
		p[i]=x[j];
		i++;
		j++;
	}
	return p;
}
main()
{
	char x[]="abcdef";
	char y[]="1234";
	char *p=merge(x,y);
	printf("%s",p);
}
