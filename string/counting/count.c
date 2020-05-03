#include"stdio.h"
#include"string.h"
#include"mystring.h"
main()
{
	char s[200];
	printf("Enter any text here : ");
	scanf("%[^\n]s",s);
	alpha(s,strlen(s));
	words(s,strlen(s));
	digits(s,strlen(s));
	special(s,strlen(s));
}
