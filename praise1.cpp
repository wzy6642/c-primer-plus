//scanf()开始读取输入以后，会在遇到的第一个空白字符、制表符或者换行符处停止读取 
#include<stdio.h>
#define PRAISE "What a super marvelous name!"
int main(void)
{
	char name[40];
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	return 0;
 } 
