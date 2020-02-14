/*strlen()给出字符串中字符（包括空格和标点符号）的准确数目
sizeof运算符提供给数目比前者大1，因为其把用来标志字符串结束的
不可见的空字符也计算在内*/
#include<stdio.h>
#include<string.h>
#define PRAISE "What a super marvelous name!"
int main(void)
{
	char name[40];
	printf("What's your name?\n");
	scanf("%s", name);
	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name of %d letters occupies %d memory cells.\n", strlen(name), sizeof name);
	printf("The phrase of praise has %d letters", strlen(PRAISE));
	printf("and occupies %d memory cells.\n", sizeof PRAISE);
	return 0;
 } 
