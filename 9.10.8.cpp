#include<stdio.h>
int fmax(int x, int y, int z);
int main(void)
{
	int i, j, k, max;
	printf("Please inpur three numbers: ");
	while((scanf("%d%d%d", &i, &j, &k)) == 3)
	{
		max = fmax(i, j, k);
		printf("The max of %d, %d and %d is %d\n", i, j, k, max);
		printf("Please inpur three numbers(q to quit): ");
	}
	printf("Done.\n");
	return 0;
}
int fmax(int x, int y, int z)
{
	int max, max1, max2;
	max1 = (x > y) ? x : y;
	max2 = (y > z) ? y : z;
	max = (max1 > max2) ? max1 : max2;
	return max;
}
