#include<stdio.h>
#include<math.h>
int main(void)
{
	int Number, i;
	float sum;
	printf("Please enter the number of times the stack is added: ");
	scanf("%d", &Number);
	for(i = 1; i <= Number; i++)
		sum += 1.0 / (pow(-1, Number + 1) * (float)i);
	printf("%lf", sum);
	return 0;
}
