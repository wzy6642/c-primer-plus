#include<stdio.h>
int main(void)
{
	float f_cm, f_m;
	printf("Please input your height: \n");
	scanf("%f", &f_cm);
	f_m = f_cm / 100;
	printf("You are %3.2fm height", f_m);
	return 0;
}
