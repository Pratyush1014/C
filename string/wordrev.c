#include"stdio.h"
#include"string.h"
void wordrev(char *s,int n)
{
	char p[10][20];//stack segment
	int i,c=0,j=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
		{
			p[c][j]=s[i];
			j++;
		}
		else
		{
			p[c][j]='\0';
			c++;
			j=0;
		}
	}
	p[c][j]='\0';
	for(i=0;i<=c;i++)
        {
                printf("%s ",p[i]);
        }
	printf("\n");

	int k;
	char t;
	for(i=0;i<=c;i++)
	{
		j=0;
		k=strlen(p[i])-1;
		while(j<k)
		{
			t=p[i][j];
			p[i][j]=p[i][k];
			p[i][k]=t;
			j++;
			k--;
		}
	}
	for(i=0;i<=c;i++)
        {
                printf("%s ",p[i]);
        }
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
	printf("Enter any sentence : ");
	scanf("%[^\n]s",s);
	display(s,strlen(s));
	wordrev(s,strlen(s));
}
