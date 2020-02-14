#include<stdio.h>
int main(void)
{
	int num_scan = 0;		//键盘读入的数字 
	int inum_even = 0;		//偶数的个数
	int inum_odd = 0;		//奇数的个数
	int add_even = 0;		//偶数的和
	int add_odd = 0;		//奇数的和 
	float ave_even = 0;		//偶数的平均数
	float ave_odd = 0;		//奇数的平均数
	while(scanf("%d", &num_scan) == 1)
	{
		if(num_scan != 0)
		{
			if(num_scan % 2 == 0)
			{
				inum_even++;
				add_even += num_scan;
				ave_even = (float)add_even /  inum_even;
			}
			else
			{
				inum_odd++;
				add_odd += num_scan;
				ave_odd = (float)add_odd /  inum_odd;
			}
		}
		else
			break;
	}
	printf("num_even: %d; ave_even: %f\n", inum_even, ave_even);
	printf("num_odd: %d; ave_odd: %f\n", inum_odd, ave_odd);
	return 0;
}
