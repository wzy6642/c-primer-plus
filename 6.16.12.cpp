#include<stdio.h>
#include<math.h>
const int X = 8;
int main(void)
{
	int i, j, m;
	int pow_N[X];
	long pow_M[X];
	for(i = 0, j = 0; i < X; i++, j++)
	{
		scanf("%d", &pow_N[i]);
		pow_M[j] = pow(2, pow_N[i]);
		printf("%5ld", pow_M[j]);
	}
	return 0;
} 
