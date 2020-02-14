#include <stdio.h>
#define MAXTITL 41		//书名的最大长度+1 
#define MAXAUTL 31		//作者名的最大长度+1
struct book{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
}; 
int main(void)
{
	struct book library;
	printf("Please enter the book title.\n");
	gets(library.title);
	printf("Now enter the author.\n");
	gets(library.author);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
	printf("%s: \"%s\"($%.2f)\n", library.author, library.title, library.value);
	printf("Done.\n");
	return 0;
}
