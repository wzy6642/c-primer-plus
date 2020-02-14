//练习printf()函数的使用 
//%d为int型变量的占位符
//\n为转义字符，表示回车换行 
#include<stdio.h>		//standard input/output header 
int main(void)			//程序开始的地方 
{
	int num;			//变量声明 
	num = 1;			//变量赋值 
	printf("I am a simple ");
	printf("computer.\n");
	printf("My favorite number is %d because it is the first.\n",num);
	return 0;
 } 
