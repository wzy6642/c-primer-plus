#include<stdio.h>
int main(void)
{
	int days;
	printf("Please input the days: \n");
	scanf("%d", &days);
	while(days > 0)
	{
		int weeks, left;
		weeks = days / 7;
		left = days % 7;
		printf("%d days are %d weeks, %d days\n", days, weeks, left);
		scanf("%d", &days);
	}
	return 0;
}
