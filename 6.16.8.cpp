#include<stdio.h>
double resultf(float f_N1, float f_N2);
double f_N1, f_N2;
double result;
//int i;
int main(void)
{
	printf("Please input two numbers which are in float: ");
//	i = scanf("%f %f", f_N1, f_N2);
	while(scanf("%lf %lf", &f_N1, &f_N2) == 2)
		resultf(f_N1, f_N2);
	return 0;
}
double resultf(float f_N1, float f_N2)
{
	result = (double)(f_N1 - f_N2) / (f_N1 * f_N2);
	printf("%lf\n", result);
	printf("Please input two numbers which are in float(q for quit): ");
	//i = scanf("%f %f", f_N1, f_N2);	
	scanf("%lf %lf", &f_N1, &f_N2);
	return result; 
}
