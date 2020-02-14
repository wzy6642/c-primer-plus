#include<stdio.h>
int main(void)
{
	int i, j, list[10];
	for(i = 0; i < 10; i++)
	{
		list[i] = 2 * i + 3;
		for(j = 0; j <= i; j++)
			printf(" %5d", list[j]);
		printf("\n");
	}
	return 0;
}

