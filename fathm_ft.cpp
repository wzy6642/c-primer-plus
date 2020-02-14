//fathm_ft.c——把两个fathoms换算成英尺 
#include<stdio.h>
int main(void)
{
	int feet, fathoms;		//多变量声明既可以放在一行，也可以放在多行 
	
	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);	//两个变量使用两个占位符 
	
	return 0;
 } 
