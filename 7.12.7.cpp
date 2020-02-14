#include<stdio.h>
#define BASIC_SALARY 10.00
#define BASIC_WORK_TIME 40
#define PRE300_TAX 0.15
#define NEXT150_TAX 0.20
#define NEXT_TAX 0.25
int main(void)
{
	int worktime, salary;
	float alltime, tax, get;
	printf("Please input your work time(s) of a week: ");
	scanf("%d", &worktime);
	if(worktime <= 40)
		alltime = (float)worktime;
	else
		alltime = 40 + (worktime - 40) * 1.5;
	salary = alltime * BASIC_SALARY;
	if(salary <= 300)
		tax = salary * PRE300_TAX;
	else if(salary <= 450)
		tax = 300 * PRE300_TAX + (salary - 300) * NEXT150_TAX;
	else
		tax = 300 * PRE300_TAX + 150 * NEXT150_TAX + (salary - 450) * NEXT_TAX;
	get = salary - tax;
	printf("Your all salary is %d; Your all tax is %.2f; The salary which you can get is %.2f", salary, tax, get);
	return 0;
}
