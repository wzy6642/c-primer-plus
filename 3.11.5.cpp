#include<stdio.h>
int main(void)
{
	int i_age;
	double do_ms;
	printf("Please input your age: ");
	scanf("%d", &i_age);
	do_ms = i_age * 3.156e7;
	printf("Your age %d is equal as %e ms.", i_age, do_ms);
	return 0;
}
