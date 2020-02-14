#include<stdio.h>
int main(void)
{
	char ch;
	int n = 0;
	printf("Please input the alphabet(# to quit): ");
	while((ch = getchar()) != '#')
	{
		printf("%4c %4d", ch, ch);
		n++;
		if(n % 8 == 0)
			printf("\n");
	} 
	return 0;
}
