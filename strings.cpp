#include<stdio.h>
#define BLURB "Authentic imitation! "
int main(void)
{
	printf("/%2s/\n", BLURB);
	printf("/%24s/\n", BLURB);
	printf("/%24.5s/\n", BLURB);	//.5告诉printf()只打印5个字符 
	printf("/%-24.5s/\n", BLURB);	//-左对齐输出 
	return 0;
}
