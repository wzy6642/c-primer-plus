#include<stdio.h>
int main(void)
{
	int weight, height;
	printf("Please input your weight and your height.\n");
	while(scanf("%d %d", &weight, &height) == 2)
	{
		if(weight < 100 && height > 64)
			if(height >= 72)
				printf("You are vary tall for your weight.\n");		//体重<100并且身高>=72 
			else if(height < 72 && height > 64)
				printf("You are tall for your weight.\n");			//体重<100并且身高在64-72之间 
			else
				printf("Your weight is ideal.\n");					//体重<100并且身高<=64
		else if(weight > 300  && height < 48)
				printf("You are quite short for your weight.\n");	//体重>300并且身高<48 
		else
			printf("Your weight is ideal.\n");
		printf("Please enter another number(q for quit): ");
	}
	printf("Done.\n");
	return 0;
} 
