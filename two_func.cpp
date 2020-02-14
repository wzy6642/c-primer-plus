//two_func.c——在一个文件中使用两个函数 
#include<stdio.h>
void butler (void);		//函数的声明 
int main(void)
{
	printf("I will summon the bulter function.\n");
	butler();			//函数的调用 
	printf("Yes. Bring me some tea and writeable CD-ROMS.\n");
	return 0;
 } 

void butler(void)		//函数的定义 
{
	printf("You rang, sir?\n");
}
