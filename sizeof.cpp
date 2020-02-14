//C的头文件系统使用typedef来使size_t在系统中作为unsigned int或unsigned long同义词 
#include<stdio.h>
int main(void)
{
	int n = 0;
	size_t intsize;
	intsize = sizeof(int);
	printf("n = %d, n has %u bytes; all ints have %u bytes.\n", n, sizeof n, intsize);
	return 0;
}
