#include"stdio.h"
#include"alpha.h"
#include"string.h"
main()
{
	char s[220];
	printf("Enter your text");
	scanf("%[^\n]s",s);
	lowercase(s,strlen(s));
	uppercase(s,strlen(s));
	titlecase(s,strlen(s));
	togglecase(s,strlen(s));
}
