#include<stdio.h>
int main(void)
{
	char ch;
	int lc = 0;
	int uc = 0;
	int oc = 0;
	while((ch = getchar()) != '#')
	{
		if('a' <= ch && ch <= 'z')
			lc++;
		else if('A' <= ch && ch <= 'Z')
			uc++;
		else
			oc++;
	}
	printf("%d iowercase, %d uppercase, %d other", lc, uc, oc);
	return 0;
}
