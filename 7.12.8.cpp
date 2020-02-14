#include<stdio.h>
#define BASIC_SALARY1 8.75
#define BASIC_SALARY2 9.33
#define BASIC_SALARY3 10.00
#define BASIC_SALARY4 11.20
#define BASIC_WORK_TIME 40
#define PRE300_TAX 0.15
#define NEXT150_TAX 0.20
#define NEXT_TAX 0.25
int main(void)
{
	int worktime, salary, num;
	float alltime, tax, get;
	printf("*****************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr				2) $9.33/hr      \n");
	printf("3) $10.00/hr	        		4) $11.20/hr     \n");
	printf("5) quit														     \n");
	printf("*****************************************************************\n");
	while(scanf("%d", &num) == 1 && num != 5)
	{
		switch(num)
		{
			case 1:
			{
				printf("Please enter the worktime: ");
				scanf("%d", &worktime);
				if(worktime <= 40)
				alltime = (float)worktime;
				else
				alltime = 40 + (worktime - 40) * 1.5;
				salary = alltime * BASIC_SALARY1;
				break;
			}
			case 2:
			{
				printf("Please enter the worktime: ");
				scanf("%d", &worktime);
				if(worktime <= 40)
				alltime = (float)worktime;
				else
				alltime = 40 + (worktime - 40) * 1.5;
				salary = alltime * BASIC_SALARY2;
				break;
			}
			case 3:
			{
				printf("Please enter the worktime: ");
				scanf("%d", &worktime);
				if(worktime <= 40)
				alltime = (float)worktime;
				else
				alltime = 40 + (worktime - 40) * 1.5;
				salary = alltime * BASIC_SALARY3;
				break;
			}
			case 4:
			{
				printf("Please enter the worktime: ");
				scanf("%d", &worktime);
				if(worktime <= 40)
				alltime = (float)worktime;
				else
				alltime = 40 + (worktime - 40) * 1.5;
				salary = alltime * BASIC_SALARY4;
				break;
			}
			case 5:
				break;
			default:
			{
				printf("Please enter 1 to 5.\n");
				break;
			}									
		} 
	if(salary <= 300)
		tax = salary * PRE300_TAX;
	else if(salary <= 450)
		tax = 300 * PRE300_TAX + (salary - 300) * NEXT150_TAX;
	else
		tax = 300 * PRE300_TAX + 150 * NEXT150_TAX + (salary - 450) * NEXT_TAX;
	get = salary - tax;	
	}
	printf("Your all salary is %d; Your all tax is %.2f; The salary which you can get is %.2f", salary, tax, get);
	return 0;
}
