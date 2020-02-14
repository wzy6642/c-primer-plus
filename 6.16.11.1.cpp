#include<stdio.h>
int main(void)
{
	int Number;
	int i;
	float sum;
	printf("Please enter the number of times the stack is added: ");
	scanf("%d", &Number);
	for(i = 1; i <= Number; i++)
		sum += 1.0/(float)i;
	printf("%f", sum);
	return 0;
}
