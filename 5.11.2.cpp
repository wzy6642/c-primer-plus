#include<stdio.h>
#define ADD 10
int main(void)
{
	int x, end;
	printf("Please input a number: \n");
	scanf("%d", &x);
	end = x + ADD;
	while(x <= end)
	{
		printf("%5d", x);
		++x;
	}
	return 0;
}
