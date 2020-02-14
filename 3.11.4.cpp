#include<stdio.h>
int main(void)
{
	float f_enter;
	printf("Please enter a float number: ");
	scanf("%f", &f_enter);
	printf("%f is equal as %e.", f_enter, f_enter);
	return 0;
}
