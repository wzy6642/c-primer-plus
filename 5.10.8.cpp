//'a' = 97  'g' = 103
#include<stdio.h>
#define END 103
int main(void)
{
	int n = 96;
	while(++n <= END)
	{
		printf("%5c", n);
	}
	printf("\n");
	return 0;
 } 
