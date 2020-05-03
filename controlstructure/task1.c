#include"stdio.h"
#include"math.h"
main()
{
	int i,n;
	printf("enter any number");
	scanf("%d",&n);
	printf("p : ");
	int p,r=0;
	scanf("%d",&p);
	while(n>0)
	{
		r=r*10+n%10;
		n=n/10;
	}
	r=r/pow(10,p);
	r=r*pow(10,p);
	for(i=0;i<p;i++)
	{
		r=r+9*pow(10,i);
	}
	int s=0;
	while(r>0)
        {
                s=s*10+r%10;
                r=r/10;
        }

	printf("%d",s);
}

