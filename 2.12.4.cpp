#include<stdio.h>
void Good(void);
void Good_1(void); 
int main(void)
{
	Good();
	Good();
	Good();
	Good_1();
	return 0;
}
void Good(void)
{
	printf("For he's a jolly good fellow!\n");
}
void Good_1(void)
{
	printf("Which nobody can deny!\n");
}
