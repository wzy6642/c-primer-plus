//FLT_DIG:float类型的最少有效数字位数(十进制) 
//DBL_DIG:double类型的最少有效数字位数(十进制) 
#include<stdio.h>
#include<float.h>
int main(void)
{
	double db_a;
	float fl_a;
	db_a = 1.0/3.0;
	fl_a = 1.0/3.0;
	printf("%19.4f,%19.4f\n", db_a, fl_a);
	printf("%19.12f,%19.12f\n", db_a, fl_a);
	printf("%19.16f,%19.16f\n", db_a, fl_a);
	printf("%19d,%19d\n", DBL_DIG, FLT_DIG);
	return 0;
}
