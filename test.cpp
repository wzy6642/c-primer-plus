#include<stdio.h>
#include<string.h>
void fit(char *, unsigned int);
int main(void)
{
	char mesg[] = "Hold on to your hats, hackers. ";
	puts(mesg);
	fit(mesg, 7);
	puts(mesg);
	puts("Let's look at some more of the srting. ");
	puts(mesg + 8);
	return 0;
}
void fit(char *string, unsigned int size)
{
	if(strlen(string) > size)
		*(string + size) = '\0';
}
