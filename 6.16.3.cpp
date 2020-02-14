#include<stdio.h>
int main(void)
{
	const int X = 6;		//通过修改此处实现不同的功能 
	char Alphabet[X];
	int i, j, k;
	/*构造所需的字母表ABCDEF*/
	for (i = 0; i < X; i++)
	{
		Alphabet[i] = 'A' + X - 1 - i;
		//printf("%c", Alphabet[i]);
	}
	for(j = X - 1; j >= 0; j--)
	{
		for(k = j; k >= j and k <= X - 1; k++)
		printf("%c", Alphabet[k-j]);
	printf("\n");
	}
	return 0;
} 
