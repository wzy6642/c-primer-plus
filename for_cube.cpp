#include<stdio.h>
int main(void)
{
	int num;
	printf("    n   n cube.\n");
	for(num = 1; num <= 6; num++)
		printf("%5d %5d\n", num, num*num*num);
	return 0;
}
