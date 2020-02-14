#include<stdio.h>
int main(void)
{
	const int X = 4;
	const int Y = 8;
	int i, j;
	for(i = 0; i < X; i++)
	{
		for(j = 0; j < Y; j++)
		printf("$");
	printf("\n");
	}
	return 0;
}
