#include"stdio.h"
#include"string.h"
char * getstring(char *p,int n)
{
	int i;
	char *q=malloc(n);
	for(i=0;i<n;i++)
	{
		q[i]=p[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%c",q[i]);
	}
	printf("\n");
	return q;
}
main()
{
	char s[200];
	printf("enter any sentence\n");
	scanf("%[^\n]s",s);
	printf("%s\n",s);
	char *p=getstring(s,strlen(s));
	printf("%s",p);
}
