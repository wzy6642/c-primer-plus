#include<stdio.h>
void pound(int n);	//函数声明要加分号 
int main(void)
{
	int times = 5;
	char ch = '!';
	float f = 6.0;
	pound(times);
	pound(ch);
	pound((int)f);
	return 0;
 } 
void pound(int n)
{
	while(n-- > 0)
	{
		printf("#");
	}
	printf("\n");
}
