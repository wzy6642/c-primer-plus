#include<stdio.h>
double fsum(double i, double j);
int main(void)
{
	double x, y, sum;
	printf("Please input two number and calculate the sum.\n");
	while((scanf("%lf %lf", &x, &y)) == 2)
	{
		sum = fsum(x, y);
		printf("%lf + %lf = %e\n", x, y, sum);
		printf("Please input two number and calculate the sum (q to quit).\n");
	}
	return 0;
}
double fsum(double i, double j)
{
	double sum = 0.0;
	sum = i + j;
	return sum;
}
