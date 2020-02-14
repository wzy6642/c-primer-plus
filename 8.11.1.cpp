#include<stdio.h>
int main(void)
{
	int count, cr;
	printf("Please input an article(Ctrl+Z to end the article): \n");
	while((cr = getchar())!= EOF)
	{
		++count;
	}
	printf("The character of the article is %d", count);
	return 0;
} 
