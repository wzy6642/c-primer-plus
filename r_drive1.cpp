#include<stdio.h>
static unsigned long int next = 1;
extern void srand1 (unsigned int x);
extern int rand1 (void);
int main(void)
{
	int count;
	unsigned seed;
	printf("Please enter your choice for seed.\n");
	while(scanf("%u", &seed) == 1)
	{
		srand1(seed);
		for(count = 0; count < 5; count++)
		printf("%hd\n", rand1());
		printf("Please enter next seed (q to quit): \n");
	}
	printf("Done\n");
	return 0;
}
int rand1(void)
{
	next = next * 1103515245 + 12345;
	return (unsigned int)(next / 65536) % 32768;
}
void srand1(unsigned int seed)
{
	next = seed;
}
