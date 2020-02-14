//reducto.c——把您的文件压缩为原来的三分之一
#include <stdio.h>
#include <stdlib.h>		//为了调用exit() 
#include <string.h> 	//为strcopy()和strcat()函数提供原型
#define LEN 40 
int main(int argc, char *argv[])
{
	FILE *in, *out;		//声明两个FILE指针
	int ch;
	char name[LEN];		//用于存储输入文件名
	int count = 0;
	//检查命令行参数
	if(argc < 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(1);
	} 
	//实现输入
	if((in = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
		exit(2);
	} 
	//实现输出
	strcpy(name, argv[1]);	//把文件名复制到数组中
	strcat(name, ".red");	//文件名后添加.red
	if((out = fopen(name, "w")) == NULL)
	{
		fprintf(stderr, "Can't creat output file.\n");
		exit(3);
	} 
	//复制数据
	while((ch = getc(in)) != EOF)
		if(count++ % 3 == 0)
			putc(ch, out);	//打印每3个字符中的1个
	//收尾工作
	if(fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");
	return 0; 
}
