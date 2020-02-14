//C的内置运算符sizeof以字节为单位给出类型的大小
#include<stdio.h>
int main(void)
{
	printf("Type int has a size of %u bytes.\n", sizeof(int));
	printf("Type char has a size of %u bytes.\n", sizeof(char));
	printf("Type long has a size of %u bytes.\n", sizeof(long));
	printf("Type double has a size of %u bytes.\n", sizeof(double));
	return 0;
 } 
