#include"stdio.h"
struct student
{
	int roll;
	char name[20];
	char branch[15];
};
void sort(struct student *p,int n)
{
	int i,j;
	struct student temp;
	for(i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if(p[i].roll>p[j].roll)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
        {
                printf("%d %s %s\n",p[i].roll,p[i].name,p[i].branch);
        }

}
main()
{
	struct student p[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter roll, name and branch");
		scanf("%d %s %s",&p[i].roll,p[i].name,p[i].branch);
	}
	for(i=0;i<10;i++)
        {
                printf("%d %s %s\n",p[i].roll,p[i].name,p[i].branch);
        }
	sort(p,10);
}
