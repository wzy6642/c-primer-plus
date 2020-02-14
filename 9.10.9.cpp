#include<stdio.h>
void menu(void);
int freturn(int low, int high);
int main(void)
{
	int low, high;
	menu();
	while((scanf("%d %d", &low, &high)) == 2)
	{
		freturn(low, high);
	}
	return 0;
}
void menu(void)
{
	printf("Please choose one of the following: \n");
	printf("1) copy files		2) move files\n");
	printf("3) remove		4) quit		 \n");
	printf("Enter the number of your choice: \n");
}
int freturn(int low, int high)
{
	int i;
	scanf("%d", &i);
	if((i <= low) || (i >= high))
		menu();
	switch(i)
	{
		case 1:	printf("1) copy files\n");
				break;
		case 2: printf("2) move files\n");
				break;
		case 3: printf("3) remove\n");
				break;
		case 4: printf("4) quit\n");
				break;
		default: menu();
				 break;
	}
	return i;
}
