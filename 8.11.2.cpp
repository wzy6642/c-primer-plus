#include<stdio.h>
int main(void)
{
	int cr, i;
	printf("Please input an article(Ctrl+Z to quit): \n");
	while((cr = getchar()) != EOF)
	{
		printf("%2c %2d", cr, cr);
		i++;
		if(i % 10 == 0)
			printf("\n");
	}
	return 0;
}
