#include<stdio.h>
#define PAGES 931
int main(void)
{
	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);		//当数字宽度大于指定宽度，字段自动扩展以适应数字的长度 
	printf("*%10d*\n", PAGES);		//默认右对齐 
	printf("*%-10d*\n", PAGES);		//强行左对齐 
	return 0;
}
