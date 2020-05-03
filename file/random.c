#include"stdio.h"
#include"stdlib.h"
FILE *p;
int write();
int read();
main()
{
	p=fopen ("random.txt","w+");
	int n;
	while(1)
	{
		printf("\n1-write\n2-read\n0-Exit");
		scanf("%d",&n);
		if(n==1)
		{
			write();
		}
		else 
		if(n==2)
		{
			read ();
		}
		else
		{
			exit(0);
		}
	}
}
int write()
{
	int n,i,r;
	fclose(p);
	p=fopen("random.txt","w+");
	printf("Enter upper limit");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		r=rand()%n;
		putw(r,p);
	}
}
int read ()
{
	printf("e-display even nums\no-dispaly odd nums");
	char x[3];
	int i;
	scanf("%s",x);
	if(x[0]=='e')
	{
		rewind(p);
		while((i=getw(p))!=EOF)
		{
			if(i%2==0)
				printf("%d ",i);	
		}
	}
	else
	{
		rewind(p);
		while((i=getw(p))!=EOF)
		{
			if(i%2!=0)
				printf("%d ",i);	
		}
	}
}










