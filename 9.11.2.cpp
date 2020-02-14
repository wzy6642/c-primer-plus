#include<stdio.h>
void chline(char ch, int i, int j);
int main(void)
{
	int i, j;
	char ch;
	while((scanf("%c %d %d", &ch, &i, &j)) == 3)
		chline(ch, i, j);
	return 0;
}
void chline(char ch, int i, int j)
{
	int x, y;
	for(x = 0; x < i; x++)
	{
		for(y = 0; y < j; y++)
			putchar(ch);
		putchar('\n');
	}	
}
