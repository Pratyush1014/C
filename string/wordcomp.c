#include"stdio.h"
#include"string.h"
char * rev(char *s,int n)
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
        for(i=0;i<1;i++)
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
	printf("\n");
	int m;
	for(j=1;j<=c;j++)
	{
		m=strcmp(p[0],p[j]);
		if(m==0)
		{
			i=0;
			printf("%s\n",p[0]);
			k=strlen(p[0])-1;
			while(i<k)
			{
				t=p[0][i];
				p[0][i]=p[0][k];
				p[0][k]=t;
				i++;
				k--;
			}
			printf("%s$",p[0]);
			return 0;
		}
	}
	printf("$");
}
main()
{
	char s[]="hotel california letoh";
	rev(s,strlen(s));
}
