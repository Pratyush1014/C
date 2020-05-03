#include"stdio.h"
#include"exotic.h"
main()
{	
	int m,i;
	int *a= malloc(4);
	int *b= malloc(4);
	int *p= malloc(4);
	int *n= malloc(4);
	printf("1:gcd\n");
	printf("2:reverse\n");
	printf("3:fact\n");
	printf("4:sum\n");
	printf("5:bits\n");
	printf("6:display\n");
	printf("enter any choice");
	scanf("%d",&m);
	int u;
	if(m==6)
	{
		printf("enter the size of array");
		scanf("%d",&u);
		int *t = malloc(4*u);
	}

	switch(m)
	{
		case 1:
			printf("enter any two numbers");
			scanf("%d%d",*a,*b);
			*p=*gcd(&a,&b);
			printf("gcd is %d",*p);
			break;
		case 2:
			printf("enter any number");
			scanf("%d",&n);
			*p=*reverse(&n);
			printf("reversed num is %d",*p);
			break;
		case 3:
			printf("enter any number");
			scanf("%d",&n);
			*p=*fact(&n);
			printf("factorial is %d",*p);
			break;
		case 4:
                        printf("enter any number");
                        scanf("%d",&n);
                        *p=*sum(&n);
                        printf("sum of digits is %d",*p);
			break;
		case 5:
                        printf("enter any number");
                        scanf("%d",&n);
                        *p=*bits(&n);
                        printf("bit count is %d",*p);
			break;
		case 6:
			*t = *display(u);
			for(i=0;i<n;i++)
		        {
		                printf("%d  ",&t[i]);
		        }
			break;
	}
}

