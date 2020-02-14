#include<stdio.h>
#include<ctype.h>
int main(void)
{
	int ch, num = 0, location = 0;
	char cr;
	while((ch = getchar())!= EOF)
	{
		cr = (char)ch;
		//if((ch >= 65 && ch <= 90) || (ch >=97 && ch <= 121))
		if(isalpha(cr))
		{
			num++;
			cr = tolower(cr);
			location = ch - 64;
			printf("%c %d", cr, location);
		}
		else
		{
			location = -1;
			printf("%d", location);
		}
	}
	printf("%d", num);
	return 0;
}
