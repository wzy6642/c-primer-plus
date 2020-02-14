#include<stdio.h>
int main(void)
{
	int answer = 55;
	int max = 100;
	int min = 1;
	char response;
	int guess = 75; 
	printf("Pick an integer from 1 to 100. I will try to guess ");
	printf("it.\nRespond with a y if my guess is right and with");
	printf("\nan n if it is wrong.\n");
	printf("Uh...is your number %d?\n", guess);
	while((response = getchar()) != 'y')
	{
		//printf("%c\n", response);
		while(getchar() != '\n')
			continue;
		if(response == 'b')
		{
			max = guess;
			guess = (guess + min) / 2;
			printf("It is big than my number.\nThen is your number %d\n", guess);
			printf("min = %d\nmax = %d\n", min, max);
		}
		else if(response == 's')
		{
			min = guess;
			guess = (guess + max) / 2;
			printf("It is smaller than my number.\nThen is your number %d\n", guess);
			printf("min = %d\nmax = %d\n", min, max);
		}
		else
			printf("Sorry, I understand only y or b or s.\n");
	}
	printf("Well, then, is it %d?\n", guess);
	printf("I knew I could do it!\n");
	return 0;
} 
