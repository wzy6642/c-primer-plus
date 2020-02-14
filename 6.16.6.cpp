#include<stdio.h>
#include<string.h>	//这个头函数里面包括函数strlen() 
int main(void)
{
	int i;
	int word_length;
	char word[40];
	printf("Please input a word: ");
	scanf("%s", word);
	//printf("%s", world);
	word_length = strlen(word);
	//printf("%d", word_length);
	for(i = word_length - 1; i >= 0; i--)
		printf("%c", word[i]); 
	return 0;
}
