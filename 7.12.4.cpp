#include<stdio.h>
int main(void)
{
	char ch;
	int i = 0;		//替代的次数 
	printf("Please input a string(# to quit): ");
	while((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			putchar(ch);
			++i;
		}
		else if (ch == '!')
		{
			putchar(ch);
			putchar(ch);
			++i;
		}
	}
	printf("%d", i);
	return 0;
}
