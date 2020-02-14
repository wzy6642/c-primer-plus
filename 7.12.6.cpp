#include<stdio.h>
#include<ctype.h>
#define STOP '#'
#define MARK 'e'
#define MARK_NEXT 'i'
int main(void)
{
	char cur;
	char cur_low;
	char next;
	int count = 0;
	while((cur = getchar()) != STOP)
	{
		cur_low = tolower(cur);
		if(cur_low == MARK && ((next = getchar()) == MARK_NEXT))
		{
			count++;
		}
	}
	if(count == 0 || count == 1)
		printf("'ei' has appearanced %d time.", count);
	else
		printf("'ei' has appearanced %d times", count);
	return 0;
}
