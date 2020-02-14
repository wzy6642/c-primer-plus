#include<stdio.h>
int main(void)
{
	int n;
	float f_N1, f_N2, result;
	printf("Please input two number which is float: ");
	n = scanf("%f %f", &f_N1, &f_N2);
	while(n == 2)
	{
		result = (f_N1 - f_N2) / (f_N1 * f_N2);
		printf("%5f\n", result);
		printf("Please input two number which is float(q for quit): ");
		n = scanf("%f %f", &f_N1, &f_N2);
	}
	return 0;
}
