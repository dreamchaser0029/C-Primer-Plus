//ÀåÃ×ÓëÓ¢³ß¡¢Ó¢´ç»»Ëã
#include<stdio.h>
int main(void)
{
	float inch, cm, mfeet;
	int feet;
	float cm_to_feet = 30.48;
	float cm_to_inch = 0.39;
	float inch_to_feet = 12;

	printf("Enter a height in centimeters:");
	scanf("%f", &cm);

	while (cm > 0)
	{
		mfeet = cm / cm_to_feet;
		feet = (int)mfeet;
		inch = (mfeet -feet) * inch_to_feet;
		printf("%.1f cm = %d feet, %.1f inches \n", cm, feet, inch);
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf("%f", &cm);
	}
	printf("Bye!\n");

	return 0;
}