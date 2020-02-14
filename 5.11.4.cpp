#include<stdio.h>
#define CM_TO_FT 0.0328084
#define CM_TO_IN 0.3937008
int main(void)
{
	float cm;
	printf("Enter a height in centimeters: ");
	scanf("%f", &cm);
	while(cm > 0)
	{
		float inches;
		int feet;
		feet = cm * CM_TO_FT;
		inches = (float)cm * CM_TO_IN;
		printf("%1.1f cm = %d feet, %4.1f inches\n", cm, feet, inches);
		printf("Enter a  height in centimeters (<=0 to quit): "); 
		scanf("%f", &cm);	
	}
	printf("bye\n");
	return 0;
}
