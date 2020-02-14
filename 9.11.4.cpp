#include<stdio.h>
double harmonic_mean(double x, double y);
int main(void)
{
	double i, j, harmonic;
	while((scanf("%lf %lf", &i, &j)) == 2)
	{
		harmonic = harmonic_mean(i, j);
		printf("%lf", harmonic);
	}
	return 0;
}
double harmonic_mean(double x, double y)
{
	double harmonic;
	harmonic = 1 / ((1 / x + 1 / y) / 2);
	return harmonic;
}
