#include<stdio.h>
int main(void)
{
	int num = 0;		//当前读入数据 
	int i = 0;			//余数 
	int inum_even = 0;	//偶数个数 
	int add_even = 0;	//偶数的和 
	int ave_even = 0;	//偶数的平均数 
	int inum_odd = 0;	//奇数的个数
	int add_odd = 0;	//奇数的和
	int ave_odd = 0;	//奇数的平均数 
	printf("Please input number(0 to quit): ");
	while(scanf("%d", &num) == 1 && num != 0)
	{
		//if(num != 0)
		//{
			i = num % 2;
			switch(i)
			{
				case 0:
				{
					++inum_even;
					add_even += num; 
					ave_even = add_even / inum_even; 
					break;
				}
				default:
				{
					++inum_odd;
					add_odd += num; 
					ave_odd = add_odd / inum_odd; 
					break;	
				}
			} 
		//} 
	}
	printf("num_even: %d, ave_even: %d\n", inum_even, ave_even);
	printf("num_odd: %d, ave_odd: %d\n", inum_odd, ave_odd);
	return 0;
} 
