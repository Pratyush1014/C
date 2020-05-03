#include"stdio.h"
int i=0;
void lowercase(char *s,int n)
{
	for(i=0;i<n;i++)
	{
			if(s[i]>=65 && s[i]<=90)
				s[i]=s[i]+32;
	}
	printf("%s\n",s);
}
void uppercase(char *s,int n)
{
        for(i=0;i<n;i++)
        {
                        if(s[i]>=97 && s[i]<=122)
                                s[i]=s[i]-32;
        }
	printf("%s\n",s);
}
void titlecase(char *s,int n)
{
	lowercase(s,n);
	if(s[0]>=97 && s[i]<=122){	s[0]=s[0]-32;	}
        for(i=0;i<n;i++)
        {
		if(s[i]==' ')
		{
			if(s[i+1]>=97 && s[i+1]<=122)
			s[i+1]=s[i+1]-32;
		}
        }
	printf("%s\n",s);
}
void togglecase(char *s,int n)
{
	lowercase(s,n);
         for(i=0;i<n;i++)
        {
                if(s[i]!=' ')
                {
                        if(s[i]>=97 && s[i]<=122)
                                s[i]=s[i]-32;
                }
        }
	if(s[0]>=65 && s[i]<=90)
	{
	      s[0]=s[0]+32;    
	}
        for(i=0;i<n;i++)
        {
                if(s[i]==' ')
                {       
                        if(s[i+1]>=65 && s[i+1]<=90)
                        s[i+1]=s[i+1]+32;
                }
        }
	printf("%s",s);
}

