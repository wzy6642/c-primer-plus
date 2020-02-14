#include<stdio.h>
int fsum(int i, int j);
int main(void)
{
	int x, y, sum;
	printf("Please input two number and calculate the sum.\n");
	while((scanf("%d %d", &x, &y))== 2)
	{
		sum = fsum(x, y);
		printf("%d + %d = %d\n", x, y, sum);
		printf("Please input two number and calculate the sum (q to quit).\n");
	}
	return 0;
}
int fsum(int i, int j)
{
	int sum = 0;
	sum = i + j;
	return sum;
}
