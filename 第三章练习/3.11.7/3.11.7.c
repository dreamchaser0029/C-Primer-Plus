#include<stdio.h>
int main(void)
{
	//Ó¢´çÓëÀåÃ××ª»»
	float inch_to_cm = 2.54;
	int inch;
	float cm;

	printf("Enter your height in inch:");
	scanf("%d", &inch);
	cm = inch * inch_to_cm;
	printf("%d inch is %f cm\n", inch, cm);

	getchar();
	getchar();
	return 0;
}