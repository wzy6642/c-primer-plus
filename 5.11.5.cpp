#include<stdio.h>
int main(void)
{
	int count, sum, end;
	count = 0;
	sum = 0;
	printf("Please inpur the end: \n");
	scanf("%d", &end);
	while(count++ < end)
	{
		int end;
		sum = sum + count;
	}
	printf("sum = %d\n", sum);
	return 0;
}
