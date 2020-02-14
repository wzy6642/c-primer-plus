#include<stdio.h>
int main(void)
{
	float f_input;
	printf("Please input a number which is float: \n");
	scanf("%f", &f_input);
	printf("The input is %3.1f or %2.1e.\n", f_input, f_input);
	printf("The input is %+6.3f or %4.3E.\n", f_input, f_input);
	return 0;
}
