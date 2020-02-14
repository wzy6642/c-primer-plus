#include<stdio.h>
void alter(int * x, int * y);
int main(void)
{
	int i, j;
	printf("Please input two numbers: ");
	while((scanf("%d %d", &i, &j)) == 2)
	{
		alter(&i, &j);
		printf("sum = %d, dec = %d\n", i, j);
		printf("Please input two numbers(q to quit): ");
	}
	printf("Done.\n");
	return 0;
}
void alter(int * x, int * y)
{
	int add, dec;
	add = *x + *y;
	dec = *x - *y;
	*x = add;
	*y = dec;
}
