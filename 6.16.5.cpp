#include<stdio.h>
int main(void)
{
	int begin, end;
	int variable, square;		//元，平方，立方 
	long int cube;
	printf("Please enter the number which is begin: ");
	scanf("%d", &begin);
	printf("Please enter the number which is end: ");
	scanf("%d", &end);
	printf("variable square  cube\n");
	printf("---------------------\n");
	for(variable = begin; variable >= begin and variable <= end; variable++)
	{
		square = variable * variable;
		cube = square * variable;
		printf("%6d %6d %6ld\n", variable, square, cube);
	}
	return 0;
}
