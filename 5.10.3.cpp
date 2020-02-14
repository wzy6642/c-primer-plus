#include<stdio.h>
int main(void)
{
	int i = 1;
	float n;
	printf("Watch out! Here come a bunch of factions!\n");
	while(i < 30)
	{
		n = 1.0 / i;
		++i;
		printf("%f\n", n);
	}
	printf("That's all, folks!\n");
	return 0;
 } 
