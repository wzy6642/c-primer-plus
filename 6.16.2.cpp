#include<stdio.h>
int main(void)
{
	const int X = 5;
	int i, j;
	for(i = 1; i <= X; i++)
	{
	
		for(j = 0; j < i; j++)
		printf("$");
	printf("\n");
	}
	return 0;
}
