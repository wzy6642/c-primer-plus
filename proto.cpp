#include<stdio.h>
int imax(int, int);
int main(void)
{
	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
	printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
	return 0;
}
int imax(int n, int m)
{
	int max;
	if(n > m)
		max = n;
	else
		max = m;
	return max;
}
