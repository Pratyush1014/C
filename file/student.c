#include"stdio.h"
#include"stdlib.h"
struct student
{
	int roll;
	char name[20];
	int mark;
};
void insert();
void search();
void rollsearch();
void namesearch();
void marksearch();
void sort();
void delete();
FILE *p,*q;
struct student s;
main()
{
	int ch;
	while(1)
	{
		printf("1-Insert\n2-Search\n3-Delete\n4-sort\n0-exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insert ();
				break;
			case 2:
				search ();
				break;
			case 3:
				delete();
				break;
			case 5:
				sort ();
				break;
			default:
				exit (0);
		}
	}
}
void insert ()
{
	p=fopen("/home/litindia/Desktop/alpha.txt","a");
	printf("Enter roll");
	scanf("%d",&s.roll);
	printf("Enter name");
	scanf("%s",s.name);
	printf("Enter mark");
	scanf("%d",&s.mark);
	fwrite(&s,sizeof(struct student),1,p);
	fclose(p);	
}		
void search ()
{	
	p=fopen("/home/litindia/Desktop/alpha.txt","r");
	rewind(p);
	int n;
	printf("1-roll search\n2-name search\n3-mark search");
	scanf("%d",&n);
	if(n==1) rollsearch();
	else
	if(n==2) namesearch();
	else
	if(n==3) marksearch();
	else
	return ;
	fclose(p);	
}								
void rollsearch()
{
	int roll;
	printf("Enter roll to search : ");
	scanf("%d",&roll);
	while(fread(&s,sizeof(struct student),1,p))
	{
		if(roll == s.roll)
			printf("%d %s %d",s.roll,s.name,s.mark);
		else
			continue;
	}
}
void namesearch()
{
	int *name;
	printf("Enter name to search : ");
	scanf("%[^\n]s",name);
	while(fread(&s,sizeof(struct student),1,p))
	{
		if(name == s.name)
			printf("%d %s %d",s.roll,s.name,s.mark);
		else
			continue;
	}
}
void marksearch()
{
	int mark;
	printf("Enter mark to search : ");
	scanf("%d",&mark);
	while(fread(&s,sizeof(struct student),1,p))
	{
		if(mark == s.mark)
			printf("%d %s %d",s.roll,s.name,s.mark);
		else
			continue;
	}
}
void delete()
{
	p=fopen("/home/litindia/Desktop/alpha.txt","r");
	rewind(p);
	q=fopen("/home/litindia/Desktop/temp.txt","w");
	int roll;
	printf("Enter roll to delete : ");
	scanf("%d",&roll);
	while(fread(&s,sizeof(struct student),1,p))
	{
		if(roll != s.roll)
			fwrite(&s,sizeof(struct student),1,q);
		else
			continue;
	}
	fclose(p);
	fclose(q);
	remove(p);
	rename("/home/litindia/Desktop/temp.txt","/home/litindia/Desktop/alpha.txt");
}
void sort()
{}





















