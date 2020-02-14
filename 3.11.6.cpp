#include<stdio.h>
int main(void)
{
	double do_kt;
	double lli_fz;
	printf("Please enter the kt of the water: ");
	scanf("%f", &do_kt);
	lli_fz = do_kt * 950 / (3.0e-23);
	printf("There are %e cells in water", lli_fz);
	return 0; 
}
