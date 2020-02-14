#include<stdio.h>
const int N = 8; 
int main(void)
{
	int i, j;
	int Number[N];
	for(i = 0; i < N; i++)
		scanf("%d", &Number[i]);
	for(j = N - 1; j >= 0; j--)
		printf("%5d", Number[j]);
	return 0;
}
