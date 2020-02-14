#include<stdio.h>
int main(void)
{
	float salary;
	printf("\aEnter your desired monthly salary: ");	//\a使电脑发出蜂鸣声 
	printf("$_______\b\b\b\b\b\b\b");					//\b为退格符 
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n");									//\r为回车符 
	return 0;
}
