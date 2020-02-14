#include<stdio.h>
int main(void)
{
	int n, squre;
	n = 0;
	squre = 0;
	printf("Please input a number: ");
	scanf("%d", &n);
	squre = n * n;
	printf("n ^ 2 = %d", squre);
	return 0;
}
