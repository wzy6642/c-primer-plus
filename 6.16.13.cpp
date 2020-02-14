#include<stdio.h>
int main(void)
{
	double N1[8], N2[8];
	int i, j;
	for(i = 0; i < 8; i++)
	{
		scanf("%lf", &N1[i]);
		printf("%10lf", N1[i]);
	}
	printf("\n");
	for(j = 1, N2[0] = N1[0]; j < 8; j++)
		N2[j] = N2[j-1] + N1[j];
	for(j = 0; j < 8; j++)
		printf("%10lf", N2[j]);
	return 0;
}
