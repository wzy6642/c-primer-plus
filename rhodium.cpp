#include<stdio.h>
int main(void)
{
	float weight;		//�����ͱ���
	float value;
	printf("Are you worth your weight in rhodium?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	scanf("%f", &weight);	//��ȡ�û����룬����ֵ��������weight
	value = 770 * weight * 14.5833;
	printf("Your weight in rhodium is worth $%.2f.\n",value);	//����value��С�������λ
	printf("You are easily worth that! If rhodium prices drop, \n");
	printf("eat more to maintain your value.\n");
	return 0; 
}