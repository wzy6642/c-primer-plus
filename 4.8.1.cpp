#include<stdio.h>
int main(void)
{
	char firstname[20];
	char lastname[20];
	printf("Please input your firstname and lastname: \n");
	scanf("%s", firstname);
	scanf("%s", lastname);
	printf("Your name is %s,%s", firstname, lastname);
	return 0;
}
