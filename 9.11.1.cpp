#include<stdio.h>
double min(double x, double y);
int main(void)
{
	double i, j, num_min;
	while((scanf("%lf %lf", &i, &j)) == 2)
	{
		num_min = min(i, j);
		printf("min = %lf", num_min);
	}
	return 0;
}
double min(double x, double y)
{
	double num_min;
	num_min = (x > y) ? y : x;
	return num_min;
}
