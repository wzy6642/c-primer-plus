#include<stdio.h>
int main(void)
{
	int i, number, j;
	char ALPHABET[26];
	for (i = 0; i < 26; i++)
		ALPHABET[i] = 'A' + i;
	for (j = 0; j < 26; j++)
		printf("%c", ALPHABET[j]);
	return 0;
} 
