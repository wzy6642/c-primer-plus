#include<stdio.h>
#include<string.h>
int main(void)
{
	char letter[255], letter_1[255];
	int i, num, j;
	printf("Please input a line of words: ");
	scanf("%s", letter); 
	num = strlen(letter);
	//printf("%d", num);
	/*for(j = 0; j < num; j++)
		printf("%c", letter[j]);*/
	for(i = 0, j = num - 1; i < num and j >= 0; i++, j--)
		letter_1[j] = letter[i];
	for(j = 0; j < num; j++)
		printf("%c", letter_1[j]);
	return 0;
}
