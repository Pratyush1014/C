#include"stdio.h"
void alpha(char *s,int n)
{
	int c=0,i;
	for(i=0;i<=n;i++)
	{
		if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
			c++;
	}
	printf("%d\n",c);
}
void digits(char *s,int n)
{
        int c=0,i;
	for(i=0;i<=n;i++)
	{
    	    if(s[i]>=48 && s[i]<=57)
       	         c++;
	}
        printf("%d\n",c);
}
void special(char *s,int n)
{
        int c=0,i;
	for(i=0;i<=n;i++)
	{
        	if((s[i]<=65 &&s[i]>=90) && (s[i]<=97 && s[i]>=122) && (s[i]<=48 && s[i]>=57))
               		 c++;
	}
        printf("%d\n",c);
}
void words(char *s,int n)
{
        int c=0,i;
	for(i=0;i<=n;i++)
	{
        if(s[i]=' ')
                c++;
	}
        printf("%d\n",c);
}

