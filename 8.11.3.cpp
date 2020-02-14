#include<stdio.h>
int main(void)
{
	int cr, num_B, num_s;
	num_B = num_s = 0;
	printf("Please input an article(Ctrl+Z to quit): \n");
	while((cr = getchar()) != EOF)
	{
		if(cr >= 97 && cr <= 122)
			++num_s;
		if(cr >= 65 && cr <= 90)
			++num_B;
	}
	printf("number of big character is %d and number of small character is %d", num_B, num_s);
	return 0;
} 
