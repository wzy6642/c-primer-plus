#include<stdio.h>
int main(void)
{
	char ch;
	int i;
	float fl;
	fl = i = ch = 'A';
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);	//A 65 65.00
	ch = ch + 1;
	i = fl + 2 * ch;
	fl = 2.0 * ch + i;
	printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);	//B 197 329.00
	ch = 5212205.17;
	printf("Now ch = %c\n", ch);
	return 0;
}
