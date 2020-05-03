#include"stdio.h"
#include"string.h"
char * large_word(char *s)
{
	char x[15];
	static char y[15];
	int i,j=0,m=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i] != ' ' && s[i]!='\0')
		{
			x[j]=s[i];
			j++;
		}
		else
		{
			x[j]='\0';
			if(m<strlen(x))
			{
				m=strlen(x);
				strcpy(y,x);
			}
			j=0;
		}
	}
	return y;
}
main()
{
	char s[]="use this documentary text.";
	char *p=(char *)malloc(15);
	p=large_word(s);
	printf("%s",p);
}
