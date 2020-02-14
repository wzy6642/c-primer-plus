#include<stdio.h>
#define M_TO_H 60
int main(void)
{
	int min;
	printf("Please input the time(min): \n");
	scanf("%d", &min);
	printf("If you enter the number lesser than 0, it will be broken down!\n");
	while(min > 0)
	{
		int hour, left;
		hour = min / M_TO_H;
		left = min % M_TO_H;
		printf("The time is %dhour %dminutes.\n", hour, left);
		scanf("%d", &min);
	}
	return 0;
}
