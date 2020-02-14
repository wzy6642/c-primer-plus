#include<stdio.h>
int main(void)
{
	char letter;
	int i, j, k, m, n, x;	
	char Alphabet[i];		//字母数组 
	printf("Please enter an English letter: ");
	scanf("%c", &letter);
	i = letter - 'A' + 1;	//计算从A到输入字母之间一共多少个字母
	//printf("%d", i);
	for(j = 0; j < i; j++)	//将A到输入的字母之间所有的字母存在数组Alphabet中 
	{
		Alphabet[j] = 'A' + j;
		//printf("%c", Alphabet[j]);
	} 
	for(k = i - 1; k >= 0; k--)	//打印空格 
	{
		for(m = 0; m < k; m++)
		 	printf(" ");
		 	for(n = 0; n >= 0 and n <= i - m - 1; n++)	//构造左半个三角形 
		 		printf("%c", Alphabet[0 + n]); 
		 		for(x = i - m - 2; x >= 0 and x<= i - m - 2; x--)	//构造右半个三角形 
					printf("%c", Alphabet[0 + x]); 
		printf("\n");
	}
	return 0;
}
