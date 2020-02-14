#include<stdio.h>
int main(void)
{
	int ten = 10;		//变量可以在声明的同时进行赋值操作 
	int two = 2;
	printf("Doing it right: ");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
	printf("Doing it wrong: ");
	printf("%d minus %d is %d\n", ten);		//占位符的个数要和变量的个数相同 
	return 0;
 } 
