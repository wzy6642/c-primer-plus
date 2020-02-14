#include<stdio.h>
#include<string.h>
int main(void)
{
	char firstname[20]; 
	char lastname[20];
	printf("Please input your firstname: \n");
	scanf("%s" ,firstname);
	printf("Please input your lastname: \n");
	scanf("%s" ,lastname);
	printf("%10s%10s\n%10d%10d\n", firstname, lastname ,
			strlen(firstname) ,strlen(lastname));
	printf("%-10s%-10s\n%-10d%-10d", firstname, lastname ,
			strlen(firstname) ,strlen(lastname));
	return 0;
}
