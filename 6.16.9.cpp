#include<stdio.h>
int main(void)
{
	int lower, upper, sum, variable;
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d", &lower, &upper);
	while(lower < upper)
	{
		for(sum = 0, variable = lower; lower <= variable && variable <= upper; variable++)
			sum += variable * variable;
		printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum);
		printf("Enter next set of limits: ");
		scanf("%d %d", &lower, &upper);
	}
	printf("Done");
	return 0;
}
