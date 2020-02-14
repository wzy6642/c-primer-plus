#include<stdio.h>
#include<stdbool.h>
bool isprime(int num);
int main(void)
{
	int a;
	printf("Please input a number: ");
	scanf("%d", &a);
	int b = a;
	for(b = a; b >= 2; b--)
	{
		if(isprime(b))
		{
			printf("%d\n", b);
		}
	}
	return 0;
}
bool isprime(int num)
{
	int div;
	bool ret = true;
	for(div = 2; div * div <= num; div++)
	{
		if(num % div == 0)
		{
			ret = false;
		}
	}
	return ret;
}
