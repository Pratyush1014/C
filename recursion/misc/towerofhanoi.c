#include"stdio.h"
void hanoi(int ,char ,char ,char );
main()
{
	hanoi(3,'A','B','C');
}
void hanoi(int n,char a,char c,char b)
{
	if (n>0)
	{
		hanoi(n-1,a,b,c);
		printf("move %d from %c to %c\n",n,a,b);
		hanoi(n-1,c,a,b);
	}
}
