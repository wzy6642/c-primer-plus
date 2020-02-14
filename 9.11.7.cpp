#include<stdio.h>
#include<stdlib.h>
double fpower(int num, int power);
int main(void)
{
	double answer;
	int i, j;
	printf("Please input two number and I will give you num^power(q to quit): \n");
	while((scanf("%d %d", &i, &j)) == 2)
	{
		answer = fpower(i, j);
	}
	system("PAUSE");
	return 0;
}
double fpower(int num, int power)
{
	int i;
	double answer = 0;
	if(power >  1)
	{
		for(i = 2, answer = num; i <= power; i++)
			answer *= num;
		goto output1;
		goto output2;
	}
	else if(power == 1)
	{
		answer = num;
		goto output1;
		goto output2;
	}
	else if(power == 0)
	{
		answer = 1; 
		goto output1;
		goto output2;
	}
	else
	{
		printf("Please check your number!\n");
		goto output2;
	}
	output1: printf("%d ^ %d = %.0lf\n",num, power, answer);
	output2: printf("Please input two number and I will give you num^power(q to quit): \n");
	return answer;
}
