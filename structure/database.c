#include"stdio.h"
struct student 
{
	int roll;
	char name[20];
	int age;
};
struct student p[5];
int i=-1;
void insert();
void delete();
void search();
void display();
void sort();
main()
{	
	printf("1->insert\n2->delete\n3->search\n4->sort\n");
	int ch;
	while(1){
	scanf("%d",&ch);
	switch (ch)
	{
		case 1:
			insert();
			display();
			break;
		case 2:
			delete();
			display();
			break;
		case 3:
			search();
			break;
		case 4:
			sort();
			display();
			break;
		default:
			break;
	}}
}
void insert()
{
	if(i==5){printf("Database is full");}
	else
	{
		i++;
		printf("Enter roll name age");
		scanf("%d %s %d",&p[i].roll,p[i].name,&p[i].age);
	}
}
/*void delete()
{	int r;
	if(i==-1){printf("Database is empty");}
	else{
	printf("Enter roll to delete");
	scanf("%d",&r);
		
	}
}*/
void search()
{
	printf("Enter roll to search");
	int r;
	scanf("%d",&r);
	int f,j;
	for(f=0;f<5;f++)
	{
		if(r==p[f].roll){j=f;break;}	
	}
	printf("%d %s %d",p[j].roll,p[j].name,p[j].age);
}
void sort()
{
	int k,l;
	struct student temp;
	for(k=0;k<=i;k++)
	{
		for(l=k+1;l<=i;l++)
		{
			if(p[k].roll<p[l].roll)
			{
				temp=p[k];
				p[k]=p[l];
				p[l]=temp;
			}	
		}
	}
}
void display()
{
	int j=0;
	for(j=0;j<=i;j++)
	{
		printf("%d %s %d\n",p[j].roll,p[j].name,p[j].age);
	}
}
