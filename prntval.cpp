/*程序使用了rv=printf(...):形式将返回值赋值给rv。因此，该语句执行两项任务：
打印信息和对变量赋值。其次，请注意计数针对所有的打印字符，包括空格和不可见的
换行字符。此处的作用相当于sizeof的功能。*/
#include<stdio.h>
int main(void)
{
	int bph2o = 212;
	int rv;
	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("The printf() function printed %d characters.\n", rv);
	return 0;
}
