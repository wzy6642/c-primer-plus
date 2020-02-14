#include<stdio.h>
int main(void)
{
	float weight;		//浮点型变量
	float value;
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	scanf("%f", &weight);	//获取用户输入，并把值赋给变量weight
	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n",value);	//保留value的小数点后两位
	printf("You are easily worth that! If rhodium prices drop, \n");
	printf("eat more to maintain your value.\n");
	return 0; 
}
