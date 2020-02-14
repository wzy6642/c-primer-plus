#include<stdio.h>
void larger_of(double * x, double * y);
int main(void)
{
	double x, y;
	while((scanf("%lf %lf", &x, &y)) == 2)
	{
		larger_of(&x, &y);
		printf("%lf", x);
	}
	return 0;
}
void larger_of(double * x, double * y)
{
	*x = (*x > *y) ? *x : *y;
}
