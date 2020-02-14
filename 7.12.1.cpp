#include<stdio.h>
int main(void)
{
	char ch;
	int inum_blank = 0;
	int inum_enter = 0;
	int inum_other = 0;
	int inum = 0;
	printf("Please input the char(# to be end): ");
	while((ch = getchar()) != '#')
	{
		inum++;
		if(ch == '\n')
			inum_enter++;
		if(ch == ' ')
			inum_blank++;
	}
	inum_other = inum - inum_blank - inum_enter;
	printf("blank: %d, enter: %d, other: %d", inum_blank, inum_enter, inum_other);
	return 0;
}
