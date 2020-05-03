#include"stdio.h"
#include"string.h"
char * rev(char *s,int n)
{
	int i,j=n-1;
	char t;
	while(i<j)
	{
		t=s[i];
		s[i]=s[j];
		s[j]=t;
		i++;
		j--;
	}
	return s;
}
void display(char *s,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%c",s[i]);
	}
	printf("\n");
}
main()
{
	char s[200];
	printf("Enter any sentence\n");
	scanf("%[^\n]s",s);
	display(s,strlen(s));
	char *p=rev(s,strlen(s));
	display(p,strlen(s));
}
