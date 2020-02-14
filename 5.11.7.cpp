#include<stdio.h>
float cube(float n);
float m, n;		//∫Í∂®“Â 
int main(void)
{
	printf("Please inpupt a number and then print n^3: \n");
	scanf("%f", &n);
	cube(n);
	printf("n ^ 3 = %2.2f", m);
	return 0;
}
float cube(float n)
{
	m = n * n * n;
}
