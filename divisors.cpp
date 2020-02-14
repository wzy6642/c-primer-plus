#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	unsigned long num;	//要检查的数 
	unsigned long div;	//可能的约数 
	bool isPrime;		//素数的标志 
	printf("Please enter an integer for analysis: ");
	printf("Enter q to quit.\n");
	while(scanf("%lu", &num) == 1)
	{
		for(div = 2, isPrime = true; (div * div) <= num; div++)
		{
			if(num % div == 0)
			{
				if((div * div) != num)
					printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
				else
					printf("%lu is divisible by %lu.\n", num, div);
				isPrime = false;	//不是一个素数 
			}
		}
		if(isPrime)
			printf("%lu is prime.\n", num);
		printf("Please enter another integer fot analysis: ");
		printf("Enter q to quit.\n"); 
	} 
	printf("Bye.\n");
	return 0;
}
