#include<stdio.h>
#include<string.h>
int main(void)
{
	char name[20];
	printf("Pleast input your name: \n");
	scanf("%s", name);
	printf("Your name is \"%s\".\n", name);
	printf("Your name is \"%20s\".\n", name);
	printf("Your name is \"%-20s\".\n", name);
	printf("Your name is \"%*s\".\n", strlen(name)+3, name);
	return 0;
}
