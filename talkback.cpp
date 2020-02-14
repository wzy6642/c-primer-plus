//strlen获取字符串长度 
#include<stdio.h>
#include<string.h>		//提供strlen()函数的原型 
#define DENSITY 62.4	//宏定义常量，人体的密度 
int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];		//name是一个有40个字符的数组 
	printf("Hi! What's your first name?\n");
	scanf("%s", name);	//此处name前没有& 
	printf("%s, what's your weight in pounds?\n", name);
	scanf("%f", &weight);
	size = sizeof name;	//sizeof用于计算name变量所占内存的大小 
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s, your volume is %2.2f cubic feet.\n", name, volume);
	printf("Also, your first name has %d letters,\n", letters);
	printf("and we have %d bytes to store it in.\n", size);
	return 0;
 } 
